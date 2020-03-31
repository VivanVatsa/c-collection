#include <bits/stdc++.h>
using namespace std;

// Function to segregate 0s and 1s
void segragate(int ar[], int n)
{
    int count = 0; // Counts the no of zeros in arr

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
            count++;
    }

    // Loop fills the array with 0 until count
    for (int i = 0; i < count; i++)
        ar[i] = 0;

    // Loop fills remaining array space with 1
    for (int i = count; i < n; i++)
        ar[i] = 1;
}

// Function to print segregated array
void print(int ar[], int n)
{
    cout << "Array after segregation is ";

    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
}

// Driver function
int main()
{
    int ar[] = {0, 1, 0, 1, 1, 1};
    int n = sizeof(ar) / sizeof(ar[0]);

    segragate(ar, n);

    print(ar, n);

    return 0;
}
