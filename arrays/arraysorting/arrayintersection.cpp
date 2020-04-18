// intersection
/*
1) Use two index variables i and j, initial values i = 0, j = 0
2) If arr1[i] is smaller than arr2[j] then increment i.
3) If arr1[i] is greater than arr2[j] then increment j.
4) If both are same then print any of them and increment both i and j.
*/
#include <bits/stdc++.h>
using namespace std;

int IntersectionArray(int ar1[], int ar2[], int n, int m)
{
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if (ar1[i] < ar2[j])
        {
            i++;
        }
        if (ar1[i] > ar2[j])
        {
            j++;
        }
        if (ar1[i] == ar2[j])
        {
            cout << ar2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Function calling
    IntersectionArray(arr1, arr2, m, n);

    return 0;
}
