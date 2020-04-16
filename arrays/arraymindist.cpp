/* 
Problem:
Given an unsorted array arr[] and two numbers x and y, find the minimum distance between x and y in arr[]. The array might also contain duplicates. You may assume that both x and y are different and present in arr[].
*/

#include <bits/stdc++.h>
using namespace std;

int findminDist(int ar[], int n, int x, int y){
    int p = -1; // previous index & minimum distance
    int min_dist = INT_MAX;
    for (int i = 0; i<n; i++){
        if(ar[i]==x || ar[i]==y){
            if(p!= -1 &&  ar[i] != ar[p])
                min_dist = min(min_dist, i - p);
                    p = i;
        }
    }
    if(min_dist == INT_MAX)
        return -1;

    return min_dist;
}

int main(){
    int ar[] = {3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
    int n = sizeof(ar) / sizeof(ar[0]);
    int x = 4;
    //int y = 6; // ans: 2
    int y = 8;

    cout << "minimum distance between " << x << " & " << y << " is " << findminDist(ar, n, x, y);

    return 0;
}