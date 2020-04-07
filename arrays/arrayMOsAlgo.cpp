/* 
Input:  arr[]   = {1, 1, 2, 1, 3, 4, 5, 2, 8};
        query[] = [0, 4], [1, 3] [2, 4]
Output: Sum of arr[] elements in range [0, 4] is 8
        Sum of arr[] elements in range [1, 3] is 4  
        Sum of arr[] elements in range [2, 4] is 6
        */

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;

int block;

struct Query{
    int L, R;
};

bool compare(Query a, Query b){

    if(a.L/block != b.L/block)
        return a.L / block < b.L / block;

        return a.R < b.R;


}

void queryResults(int ar[], int n, Query q[], int m){

    block = (int)sqrt(n);

    sort(q, q+m, compare);

    int currentL = 0;
    int currentR = 0;

    int currentSum = 0;

    for (int i = 0; i < m; i++){

        int L = q[i].L;
        int R = q[i].R;

        while(currentL<L){
            currentSum -= ar[currentL];
            currentL++;
        }
        while(currentL > L){
            currentSum += ar[currentL - 1];
            currentL--;
        }

        while(currentR<=R){
            currentSum += ar[currentR];
            currentR++;
        }
        while(currentR> R+1){
            currentSum -= ar[currentR - 1];
            currentR--;
        }
        cout << "Sum of [" << L << " , " << R << "] is " << currentSum << "\n";
    }
}

int main(){
    int ar[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int n = sizeof(ar) / sizeof(ar[0]);

    Query q[] = {{0, 4}, {1, 3}, {2, 4}};

    int m = sizeof(q) / sizeof(q[0]);
    queryResults(ar, n, q, m);
    return 0;
}