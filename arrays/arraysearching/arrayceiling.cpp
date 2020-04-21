// ceiling and floor
/*Given a sorted array and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Assume than the array is sorted in non-decreasing order.

Examples :

For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
For x = 0:    floor doesn't exist in array,  ceil  = 1
For x = 1:    floor  = 1,  ceil  = 1
For x = 5:    floor  = 2,  ceil  = 8
For x = 20:   floor  = 19,  ceil doesn't exist in array

ceiling search functions and floor search functions

Method 1 (Linear Search)
Algorithm to search ceiling of x:
1) If x is smaller than or equal to the first element in array then return 0(index of first element)
2) Else Linearly search for an index i such that x lies between arr[i] and arr[i+1].
3) If we do not find an index i in step 2, then return -1

#include <bits/stdc++.h> 
using namespace std; 

/* Function to get index of ceiling of x in arr[low..high] 

int  ceilSearch(int arr[], int low, int high, int x)
{

    int i;

    /* If x is smaller than or equal to first element, then return the first element 

    if (x <= arr[low])
        return low;

//     /* Otherwise, linearly search for ceil value 
//     for (i = low; i < high; i++)
//     {
//         if (arr[i] == x)
//             return i;

//         /* if x lies between arr[i] and arr[i+1] including 
// 		arr[i+1], then return arr[i+1] */
//         if (arr[i] < x && arr[i + 1] >= x)
//             return i + 1;
//     }

//     /* If we reach here then x is greater than the last element 
// 		of the array, return -1 in this case */
//     return -1;
// }

// /* Driver code*/
// int main()
// {
//     int arr[] = {1, 2, 8, 10, 10, 12, 19};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 3;
//     int index = ceilSearch(arr, 0, n - 1, x);
//     if (index == -1)
//         cout << "Ceiling of " << x << " doesn't exist in array ";
//     else
//         cout << "ceiling of " << x << " is " << arr[index];

//     return 0;
// }

/* Method 2(Binary Search)
    Instead of using linear search,
    binary search is used here to find out the index.Binary search reduces time complexity to O(Logn).
*/

#include <bits/stdc++.h>
using namespace std;

int ceilingFunction(int ar[], int high, int low, int x){
    
    
    if(x>ar[high])
        return -1;
    if(x<=ar[low])
        return low;
    int mid = (high + low) / 2;
    if(ar[mid] == x)
        return mid;

    /* If x is greater than arr[mid],  
       then either arr[mid + 1] is ceiling of x  
       or ceiling lies in arr[mid+1...high] */
    else if(x > ar[mid]){
        
        if (mid + 1 <= high && x <= ar[mid + 1])
            return mid + 1;
        else
            return ceilingFunction(ar, mid + 1, high, x);
        // if(x  == ar[mid+1])
        //     return mid + 1;
        // else
        //     return ceilingFunction(ar, mid + 1, high, x);
    }

    /* If x is smaller than arr[mid],  
       then either arr[mid] is ceiling of x  
       or ceiling lies in arr[mid-1...high] */
    else {
            // if(x == ar[mid])
            //     return mid;
            // else
            //     return ceilingFunction(ar, low, (mid - 1), x);

            if (mid - 1 >= low && x > ar[mid - 1])
                return mid;
            else
                return ceilingFunction(ar, low, (mid - 1), x);
    }
}

int main(){
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int index = ceilingFunction(arr, 0, n - 1, x);
    if (index == -1)
        cout << "Ceiling of " << x
             << " doesn't exist in array ";
    else
        cout << "ceiling of " << x
             << " is " << arr[index];

    return 0;  
}