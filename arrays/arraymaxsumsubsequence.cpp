#include <bits/stdc++.h>
using namespace std;

int max_subsequence(int ar[], int n){
    int i, j;
    int max = 0;
    int msis[n];
    //initialize all the elements of max_sub 0
    for (i = 0; i < n; i++)
        msis[i] = ar[i];
    //evaluating max sum values in bottom up manner
    for (i = 1; i<n; i++)
        for (j = 0; j < i; j++)
            if(ar[i] > ar[j] &&  msis[i] < msis[j]+ar[i])
                msis[i] = msis[j] + ar[i];

                // to pick the maximum values out of the msis array
    for (i = 0; i < n;i++)
        if(max<msis[i])
            max = msis[i];

    return max;
}

int main(){
    //int ar[] = {1, 101, 2, 3, 100, 4, 5};
    // int ar[] = {3 + 4 + 5 + 10};
     int ar[] = {10, 5, 4, 3};
    

    int size = sizeof(ar) / sizeof(ar[0]);
    cout << "max subsequence of the array is " << max_subsequence(ar, size);

    return 0;
}