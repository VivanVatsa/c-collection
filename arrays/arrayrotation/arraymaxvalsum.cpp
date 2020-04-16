#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// function to calc the max value of i*ar[i]
int sum(int ar[], int n)
{
    int arSum = 0; // store value of sum of arrays
    int curval = 0; // store value of i*ar[i]
    for (int i = 0; i < n;i++)
    {
        arSum = arSum + ar[i];
        curval= curval+(i*ar[i]);

    }

    int maxval = curval;

    // doing all rotation and checking the max rotation sum
    for (int j = 1; j < n;j++)
    {
        curval = curval + arSum - n * ar[n - j];
        if(curval > maxval)
            maxval = curval;

    }

    return maxval;

}

int main()
{
    int ar[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << "\n Max sum is" << sum(ar, n);

    return 0;

}
