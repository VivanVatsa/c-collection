// insertion in an array (unsorted)
#include <bits/stdc++.h>
using namespace std;

int insertElement(int ar[], int n, int key, int capacity){
    //check whether the element is greater than or equal to the capacity for insertion at end

    if (n >= capacity)
    {   return n; }

    ar[n] = key;

    return (n + 1);
}

int main(){
    int ar[] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(ar) / sizeof(ar[0]);
    int n = 6;
    int i;
    int key = 44;

    for (int i = 0; i < n; i++)
        cout << ar[i]<<" ";
    cout << endl;


    // inserting the element as key
    n = insertElement(ar, n, key, capacity);

    for (i = 0; i < n; i++)
        cout << ar[i] << " ";

    return 0;
}