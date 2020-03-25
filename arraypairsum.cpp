#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// to find pair in sorted array whose is equal to the given sum 

bool findPair(int ar[], int n, int x)
{

    // finding the pivot elements

    int i;
    for (int i = 0; i < n - 1; i++)
        if(ar[i] > ar[i+1])
            break;

    int l = (i + 1) % n; // im still working on how this came to existence ??
    // this is used as an iteration over array in rotational manner 
    // but 'l' index of smallest element 
    
    int r = i; // r will be the biggest element in the index 

    while (l !=r)
    {
        if(ar[l] + ar[r] == x)
            return true;
        
        if(ar[l] + ar[r] < x)
        
            l = (l + 1) % n;

        else
        
            r = (n + r - 1) % n;   
    }
    return false;
}

int main()
{
    int ar[] = {5, 2, 36, 4, 1};
    int sum = 7;
    int n = sizeof(ar) / sizeof(ar[0]);

    if(findPair(ar, n, sum))
        cout << "array has  one pair elements equal to given number";
    else
        cout << "array doesnt have any pair";

    return 0;
}