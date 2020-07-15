#include <bits/stdc++.h>
using namespace std;

int zerosort(int ar[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (ar[i] !=0)
            ar[count++] = ar[i];

        
        while(count < n)
            ar[count++] = 0;

}

int main()
{
    int ar[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(ar) / sizeof(ar[0]);

    for (int i = 0; i < n; i++)
        cout << ar[i] << endl;

    zerosort(ar, n);

    cout << " array after sorting or pushing all zeroes to the end of the array" << endl;

    for (int i = 0; i < n; i++)
        cout << ar[i] << endl;

    return 0;

}

// alternate method using single traversal method zero sorting/ pushing
/* 

// C++ implementation to move all zeroes at 
// the end of array 
#include <iostream> 
using namespace std; 

// function to move all zeroes at 
// the end of array 
void moveZerosToEnd(int arr[], int n) 
{ 
	// Count of non-zero elements 
	int count = 0; 

	// Traverse the array. If arr[i] is non-zero, then 
	// swap the element at index 'count' with the 
	// element at index 'i' 
	for (int i = 0; i < n; i++) 
		if (arr[i] != 0) 
			swap(arr[count++], arr[i]); 
} 

// function to print the array elements 
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 

// Driver program to test above 
int main() 
{ 
	int arr[] = { 0, 1, 9, 8, 4, 0, 0, 2, 
						7, 0, 6, 0, 9 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	cout << "Original array: "; 
	printArray(arr, n); 

	moveZerosToEnd(arr, n); 

	cout << "\nModified array: "; 
	printArray(arr, n); 

	return 0; 
} 

*/