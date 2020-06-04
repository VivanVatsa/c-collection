// linear search is just a brute force method to search thru all the elements in the array
//The time complexity of above algorithm is O(n).
//algorithm of linear search
/*

    Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
    If x matches with an element, return the index.
    If x doesn’t match with any of elements, return -1.
*/

// i should try to make more functional based programming

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int ar[10];
    int x;
    for(int i=0; i<10; i++)
        cin >> ar[i];

    cout << "enter the number you want to search \n";
    cin >> x;

    for(int i=0; i<10; i++){
        if(ar[i] == x)
            cout << i;
        else
            return -1;
    }
    return 0;
}

