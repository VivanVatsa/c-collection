/*Examples :

Input  : a[] = {1, 3, 2, 3, 4}
Output : 3

Input  : a[] = {1, 5, 1, 2, 3, 4}
Output : 1

We are given an array arr[] of size n. Numbers are from 1 to (n-1) in random order. The array has only one repetitive element. We need to find the repetitive element.

Method 1 (Simple) We use two nested loops. The outer loop traverses through all elements and the inner loop check if the element picked by outer loop appears anywhere else.

// using XOR
*/

#include <bits/stdc++.h>
using namespace std;

int repeatElement(int ar[], int n){
    int store = 0; // its stores all the XORed elements
    for (int i = 0; i < n-1; i++)
        store = store ^ (i + 1) ^ ar[i];
    store = store ^ ar[n - 1];

    return store;
}

int main(){
    int arr[] = {9, 8, 2, 6, 1, 8, 5, 3, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << repeatElement(arr, n);
    return 0;
}

/*
//using indexing

// CPP program to find the only 
// repeating element in an array 
// where elements are from 1 to n-1. 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find repeted element 
int findRepeating(int arr[], int n) 
{ 
	int missingElement = 0; 

	// indexing based 
	for (int i = 0; i < n; i++){ 

		int element = arr[abs(arr[i])]; 

		if(element < 0){ 
			missingElement = arr[i]; 
			break; 
		} 
	
	arr[abs(arr[i])] = -arr[abs(arr[i])]; 
} 

return abs(missingElement); 

} 

// driver code 
int main() 
{ 
	int arr[] = { 5, 4, 3, 9, 8, 
				9, 1, 6, 2, 5}; 

	int n = sizeof(arr) / sizeof(arr[0]); 

	cout << findRepeating(arr, n); 

	return 0; 
} 
