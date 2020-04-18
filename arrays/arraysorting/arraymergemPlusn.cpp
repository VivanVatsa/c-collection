/*
Let first array be mPlusN[] and other array be N[]
1) Move m elements of mPlusN[] to end.
2) Start from nth element of mPlusN[] and 0th 
   element of N[] and merge them into mPlusN[].
   */

#include <bits/stdc++.h>
using namespace std;

#define NA -1

void moveEnd(int mPLusN[], int n){
    // vector<int> v;
    // for(int i:n)
    //     v.pushback(i) = mPLusN[i--];

    int j = n - 1; //index for mPlusN[] pushing values into end
    for (int i = n - 1; i >= 0; i--)
    if(mPLusN[i] != NA){
        mPLusN[j] = mPLusN[i];
        j--;
    }
}

int mergearray(int mPlusN[], int N[], int m, int n) // values to be stored as mPlusN[], then N[], then m is size of mPlusN & n is of N[]
{
    int i = n; // current index of i/p part of mPlusN[ ]
    int j = 0; // current index of N[]
    int k = 0; // current index of output of mPlusN[]

    while (k<(m+n))
    {
        if((i <(m+n) && mPlusN[i] <= N[j]) || (j==n)){
            mPlusN[k] = mPlusN[i];
            k++;
            i++;
        }
    }
}

void disp(int ar[], int n) {
    for (int i = 0; i < n; i++)
        cout << ar[i] << " " << endl;
    
}

int main()
{

    int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
    int N[] = {5, 7, 9, 25};

    int n = sizeof(N) / sizeof(N[0]);
    int m = sizeof(mPlusN) / sizeof(mPlusN[0]) - n;

    /*Move the m elements at the end of mPlusN*/
    moveEnd(mPlusN, m + n);

    /*Merge N[] into mPlusN[] */
    mergearray(mPlusN, N, m, n);

    /* Print the resultant mPlusN */
    disp(mPlusN, m + n);

    return 0;
}