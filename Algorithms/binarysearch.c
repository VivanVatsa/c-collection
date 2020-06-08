#include <bits/stdc++.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1

int binary_search(int ar[], int left, int right, int x){

    if(right>=1){
        int mid_value = left + (right - 1) / 2;

        if(ar[mid_value] == x)
            return mid_value;
        
        if (ar[mid_value] >x)
            return binary_search(ar, left, mid_value - 1, x);
        
        //this is the else condition without writing the else condition

        return binary_search(ar, mid_value + 1, right, x);
    }

    return -1;

}
int main(void){
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;
    int result = binary_search(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d",result);
    return 0;
}


// https://www.geeksforgeeks.org/binary-search/
/*
Binary Search: Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

algorithm
The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). We basically ignore half of the elements just after one comparison.

    Compare x with the middle element.
    If x matches with middle element, we return the mid index.
    Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
    Else (x is smaller) recur for the left half.


*/