#include <bits/stdc++.h>

using namespace std;
// cyclic array rotation

void rotate(int ar[], int n)
{

    int x = ar[n - 1], i;
    for (i = n - 1; i > 0; i--)
        ar[i] = ar[i - 1];
    ar[0] = x;
}

int main()
{

    int ar[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(ar) / sizeof(ar[0]);

    cout << "given array is \n";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i];
    }

    rotate(ar, n);

    cout << "rotated array is \n";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i];
    }

    return 0;
}