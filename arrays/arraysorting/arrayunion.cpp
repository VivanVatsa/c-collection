// union
/*
1) Use two index variables i and j, initial values i = 0, j = 0
2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i.
3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j.
4) If both are same then print any of them and increment both i and j.
5) Print remaining elements of the larger array.
*/

#include <bits/stdc++.h>
using namespace std;

int UnionArray(int ar1[], int ar2[], int n, int m)
{
    int i = 0;
    int j = 0;
    while (i<n && j<m)
    {
        if (ar1[i]<ar2[j])
        {
            cout << ar1[i++]<<" ";
            //i++;
        }
        if(ar1[i]>ar2[j])
        {
            cout << ar2[j++]<<" ";
            //j++;
        }
        if(ar1[i]==ar2[j])
        {
            cout << ar2[j++]<<" ";
            i++;
        }
    }

    //displaying remaining elements of the larger array.
    while(i<n)
    {
        cout << ar1[i++] << " ";
    }
    while(j<m)
    {
        cout << ar2[j++] << " ";
    }
}

int main()
{
    int ar1[] = {1, 2, 4, 5, 6};
    int ar2[] = {2, 3, 5, 7};

    int n = sizeof(ar1) / sizeof(ar1[0]);
    int m = sizeof(ar2) / sizeof(ar2[0]);

    // Function calling
    UnionArray(ar1, ar2, n, m);

    return 0;
}