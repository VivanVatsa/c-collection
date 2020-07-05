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
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    // for sorting the vector

    int ar[] = {10, 20, 5, 23, 42, 15};
    int n = sizeof(ar) / sizeof(ar[0]);
    vector<int> vect(ar, ar + n); // this is the init of the vector which has the starting element as the "ar" and will go until the size becomes equivalent to "ar+n"

    cout << "the entered ";
    for(int i=0; i<n; i++)
        cout << vect[i] << " ";

    // Sorting the Vector in Ascending order
    sort(vect.begin(), vect.end());

    cout << "\nVector after sorting is: ";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";

    // Reversing the Vector
    reverse(vect.begin(), vect.end());

    cout << "\nVector after reversing is: ";
    for (int i = 0; i < 6; i++)
        cout << vect[i] << " ";

    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());

    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());

    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

    cout << "Occurrences of 20 in vector : ";

    // Counts the occurrences of 20 from 1st to
    // last element
    cout << count(vect.begin(), vect.end(), 20);

    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(), 5) != vect.end() ? cout << "\nElement found" : cout << "\nElement not found";

    auto q = lower_bound(vect.begin(), vect.end(), 20);

    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);

    cout << "The lower bound is at position: ";
    cout << q - vect.begin() << endl;

    cout << "The upper bound is at position: ";
    cout << p - vect.begin() << endl;

    // -----------------------------------

    cout << "Vector is :";
    for (int i = 0; i < 6; i++)
        cout << vect[i] << " ";

    // Delete second element of vector
    vect.erase(vect.begin() + 1);

    cout << "\nVector after erasing the element: ";
    for (int i = 0; i < 5; i++)
        cout << vect[i] << " ";

    // sorting to enable use of unique()
    sort(vect.begin(), vect.end());

    cout << "\nVector before removing duplicate "
            " occurrences: ";
    for (int i = 0; i < 5; i++)
        cout << vect[i] << " ";

    // Deletes the duplicate occurrences
    vect.erase(unique(vect.begin(), vect.end()), vect.end());

    cout << "\nVector after deleting duplicates: ";
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";


        // ----------------------------------------
    cout << "Given Vector is:\n";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";

    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation:\n";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";

    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:\n";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";
    
    // ----------------------------------------

    // Return distance of first to maximum element
    cout << "Distance between first to max element: ";
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));

                    //  ----------------------------------

    return 0;

}