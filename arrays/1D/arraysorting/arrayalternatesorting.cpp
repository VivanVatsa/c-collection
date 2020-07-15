#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

void alternateSort(int ar[], int n){
    sort(ar, ar + n);
    int i = 0;
    int j = n-1;
    while(i<j){
        cout << ar[j--] << " ";
        cout << ar[i++] << " ";
    }
    if(n%2 !=0)
        cout << ar[i];
}

int main()
{
    int arr[] = {1, 12, 4, 6, 7, 10};
    int x = sizeof(arr);
    cout << x << endl;
    int y = sizeof(arr[0]);
    cout << y << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    alternateSort(arr, n);
    return 0;
}