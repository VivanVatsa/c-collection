// first STL for array algorithm is all_of()
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm> // for all_of()
#include <math.h>
using namespace std;

int main(void){
    int ar[6] = {1, 2, 3, 4, 5 - 6};
    all_of(ar, ar + 6, [](int x) { return x > 0; }) ? cout << "all positive elements" : cout << "all arent positive elements";

    any_of(ar, ar + 6, [](int x) { return x ; }) ? cout << "There exists a negative element" : cout << "All are positive elements";

    int ar1[6] = {0};

    // Using iota() to assign values
    iota(ar1, ar1 + 6, 20);

    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i = 0; i < 6; i++)
        cout << ar1[i] << " ";
        

    return 0;
}

