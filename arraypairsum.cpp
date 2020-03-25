#include <bits/stdc++.h>
using namespace std;

// to find pair in sorted array whose is equal to the given sum 

bool findPair(int ar[], int n, int x)
{

    // finding the pivot elements

    int i;
    for (int i = 0; i < n - 1; i++)
        if(ar[i] > ar[i+1])
            break;

    int l = (i + 1) % n; // im still working on how this came to existence ??
    // this is used as an iteration over array in rotational manner 
    // but 'l' index of smallest element 
    
    int r = i; // r will be the biggest element in the index 

    while (l !=r)
    {
        if(ar[l] + ar[r] == x)
            return true;
        
        if(ar[l] + ar[r] < x)
        
            l = (l + 1) % n;

        else
        
            r = (n + r - 1) % n;   
    }
    return false;
}

int main()
{
    int ar[] = {5, 2, 36, 4, 1};
    int sum = 7;
    int n = sizeof(ar) / sizeof(ar[0]);

    if(findPair(ar, n, sum))
        cout << "array has  one pair elements equal to given number";
    else
        cout << "array doesnt have any pair";

    return 0;
}


// to also count number of pairs having the given sum

/* 

// C++ program to find number of pairs with 
// a given sum in a sorted and rotated array. 
#include<bits/stdc++.h> 
using namespace std; 

// This function returns count of number of pairs 
// with sum equals to x. 
int pairsInSortedRotated(int arr[], int n, int x) 
{ 
	// Find the pivot element. Pivot element 
	// is largest element of array. 
	int i; 
	for (i = 0; i < n-1; i++) 
		if (arr[i] > arr[i+1]) 
			break; 
	
	// l is index of smallest element. 
	int l = (i + 1) % n; 
	
	// r is index of largest element. 
	int r = i; 
	
	// Variable to store count of number 
	// of pairs. 
	int cnt = 0; 

	// Find sum of pair formed by arr[l] and 
	// and arr[r] and update l, r and cnt 
	// accordingly. 
	while (l != r) 
	{ 
		// If we find a pair with sum x, then 
		// increment cnt, move l and r to 
		// next element. 
		if (arr[l] + arr[r] == x){ 
			cnt++; 
			
			// This condition is required to 
			// be checked, otherwise l and r 
			// will cross each other and loop 
			// will never terminate. 
			if(l == (r - 1 + n) % n){ 
				return cnt; 
			} 
			
			l = (l + 1) % n; 
			r = (r - 1 + n) % n; 
		} 

		// If current pair sum is less, move to 
		// the higher sum side. 
		else if (arr[l] + arr[r] < x) 
			l = (l + 1) % n; 
		
		// If current pair sum is greater, move 
		// to the lower sum side. 
		else
			r = (n + r - 1)%n; 
	} 
	
	return cnt; 
} 

/* Driver program to test above function 
int main()
{
    int arr[] = {11, 15, 6, 7, 9, 10};
    int sum = 16;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << pairsInSortedRotated(arr, n, sum);

    return 0;
}
*/