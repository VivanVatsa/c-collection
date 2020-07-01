/*
 Non-Manipulating Algorithms

    sort(first_iterator, last_iterator) – To sort the given vector.
    reverse(first_iterator, last_iterator) – To reverse a vector.
    *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
    *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
    accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements 
    count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
find(first_iterator, last_iterator, x) – Points to last address of vector ((name_of_vector).end()) if element is not present in vector. 
binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’. 

Some Manipulating Algorithms

    arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
    arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line. 
    next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation. 
distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index. 
*/

#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

