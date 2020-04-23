//used to search pairs in an array
//just to tell u whether the ascending array has pair or not and not display it
/* 
the main idea is to tell yes or no / or true or false that whether that array has a pair of the given sum or not
// Naive solution to find if there is a 
// pair in A[0..N-1] with given sum. 

bool isPairSum(A[], N, X) 
{ 
	for (i = 0; i < N; i++) { 
		for (j = 0; j < N; j++) { 
			if (A[i] + A[j] == X) 
				return true; // pair exists 

			if (A[i] + A[j] > X) 
				break; // as the array is sorted 
		} 
	} 

	// No pair found with given sum. 
	return false; 
} 


Now let’s see how the two-pointer technique works. We take two pointers, one representing the first element and other representing the last element of the array, and then we add the values kept at both the pointers. If their sum is smaller than X then we shift the left pointer to right or if their sum is greater than X then we shift the right pointer to left, in order to get closer to the sum. We keep moving the pointers until we get the sum as X

*/

#include <bits/stdc++.h>
using namespace std;

bool twoPointer(ar[], n, x){
	int a =0;
	
}