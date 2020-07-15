// deleting an element from an array(unsorted)
#include <bits/stdc++.h>
using namespace std;

int findElements(int ar[], int n, int key){
    int i;
    for (i = 0; i<n; i++)
        if(ar[i]==key)
            return i;

    return (n-1);
}

int deleteelement(int ar[], int n, int key){
    int position = findElements(ar, n, key);
    if(position == -1){
        cout << "elements not found";
    }

    //deletion
    int i;
    for (int position; i < n - 1; i++)
        ar[i] = ar[i + 1];

    return - 1;
}

int main()
{
    int i;
    int arr[] = {10, 50, 30, 40, 20};

    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    n = deleteelement(arr, n, key);

    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
