/*
Given an unsorted array of integers, sort the array into a wave like array. An array ‘arr[0..n-1]’ is sorted in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..........
Examples:

 Input:  arr[] = {10, 5, 6, 3, 2, 20, 100, 80}
 Output: arr[] = {10, 5, 6, 2, 20, 3, 100, 80} OR
                 {20, 5, 10, 2, 80, 6, 100, 3} OR
                 any other array that is in wave form

 Input:  arr[] = {20, 10, 8, 6, 4, 2}
 Output: arr[] = {20, 8, 10, 4, 6, 2} OR
                 {10, 8, 20, 2, 6, 4} OR
                 any other array that is in wave form

 Input:  arr[] = {2, 4, 6, 8, 10, 20}
 Output: arr[] = {4, 2, 8, 6, 20, 10} OR
                 any other array that is in wave form

 Input:  arr[] = {3, 6, 5, 10, 7, 20}
 Output: arr[] = {6, 3, 10, 5, 20, 7} OR
                 any other array that is in wave form
*/

//algorithm for wave form sorting
/* algorithm: -
This can be done in O(n) time by doing a single traversal of given array. The idea is based on the fact that if we make sure that all even positioned (at index 0, 2, 4, ..) elements are greater than their adjacent odd elements, we don’t need to worry about odd positioned element. Following are simple steps.
1) Traverse all even positioned elements of input array, and do following.
….a) If current element is smaller than previous odd element, swap previous and current.
….b) If current element is smaller than next odd element, swap next and current.

*/


#include <bits/stdc++.h>
using namespace std;


//swapping two elements
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void wavesort(int ar[], int n){

    //traversing all the even elements with i+=2
    for (int i = 0; i < n; i+=2){
        if(ar[i-1]>ar[i]) // current element smaller than previous odd
            swap(ar[i], ar[i - 1]); //swap previous and current
        if(ar[i]<ar[i+1]) // current element smaller than next odd 
            swap(ar[i], ar[i+1]); // swap next and current
    }
}

int main(int argc, char const *argv[])
{
    int ar[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(ar) / sizeof(ar[0]);
    wavesort(ar, n);
    for(int i = 0;i < n;i++){
        cout << ar[i] << " ";
    }
    return 0;
}
