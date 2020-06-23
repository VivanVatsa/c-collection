// binary search algo

/*
binary_search(startaddress, endaddress, valuetofind)

startaddress: the address of the first element of the array.
endaddress: the address of the last element of the array.
valuetofind: the target value which we have to search for.
*/
// CPP program to implement
// Binary Search in
// Standard Template Library (STL)
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << " ";
}

int main()
{
    int ar[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int asize = sizeof(ar) / sizeof(ar[0]);
    cout << "\n The array is : ";
    show(ar, asize);

    cout << "\n\nLet's say we want to search for 2 in the array";

    cout << "\n So, we first sort the array";
    sort(ar, ar + asize);

    cout << "\n\n The array after sorting is : ";
    show(ar, asize);

    cout << "\n\nNow, we do the binary search";

    if (binary_search(ar, ar + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(ar, ar + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    return 0;
}
