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

    sort
}