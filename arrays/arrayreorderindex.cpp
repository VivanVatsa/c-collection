#include <bits/stdc++.h>

using namespace std;

int reorder(int ar[], int index[], int n)
{
    // if i have to assign values of one array into another array 
    // then make a temp array and traverse all the values accordingly

    int temp[n];

    for (int i = 0; i < n; i++)
        temp[index[i]] = ar[i]; // ar[i] & index[i] are indexed together

    for (int i = 0; i < n; i++) // copying temp into ar
    {
        ar[i] = temp[i];
        index[i] = i;
    }

}

int main()
{
    int ar[] = {50, 40, 70, 60, 90};
    int index[] = {3, 0, 4, 1, 2};

    int n = sizeof(ar) / sizeof(ar[0]);

    reorder(ar, index, n);

    cout << "reordered array is \n";
    for (int i = 0; i<n; i++)
        cout << ar[i] << " ";

    cout << "\n modified index array is: \n";

    for (int i = 0; i < n; i++)
        cout << index[i] << " ";

    return 0;
}