#include <bits/stdc++.h>
using namespace std;

// normal binary search 

int bin_search(int ar[], int low, int high, int key){
    if(high < low)
        return -1;

    int mid = (low + high) / 2;
    if(key == ar[mid])
        return mid;
    
    if (key > ar[mid])
        return bin_search(ar, (mid + 1), high, key); //breaking the array into 2 parts
    
    else
    {
        return bin_search(ar, low, (mid - 1), key);

    }
    
}

//func to get pivot element in the array 
// if ar = {2,3,4,1,5,6} then it return 3 (as array index is 6)

int pivot(int ar[], int low, int high){
    // base cases 

    if(high < low)
        return -1;

    if(high == low)
        return low;

    int mid = (low + high) / 2;
    if(mid < high && ar[mid] > ar[mid+1])
        return mid;

    if(mid > low && ar[mid] < ar[mid-1])
        return (mid - 1);
    
    if(ar[low] >=ar[mid])
        return pivot(ar, low, (mid - 1));

    return pivot(ar, mid + 1, high);
}

/* Searches an element key in a pivoted 
   sorted array arr[] of size n */
int pivotedBinarySearch(int ar[], int n, int key)
{
    int piv= pivot(arr, 0, n - 1);


    // If we didn't find a pivot,
    // then array is not rotated at all
    if (piv == -1)
        return binarySearch(ar, 0, n - 1, key);

    // If we found a pivot, then first compare with pivot
    // and then search in two subarrays around pivot
    if (ar[piv] == key)
        return piv;

    if (ar[0] <= key)
        return binarySearch(arr, 0, piv - 1, key);

    return binarySearch(arr, piv + 1, n - 1, key);
}

/* Driver program to check above functions */
int main()
{
    // Let us search 3 in below array
    int arr1[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 3;

    // Function calling
    cout << "Index of the element is : " << pivotedBinarySearch(arr1, n, key);

    return 0;
}