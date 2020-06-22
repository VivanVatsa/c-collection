#include <bits/stdc++.h>
#include <algorithm> // the header file to
using namespace std;

/*
SORT STL Algorithm

sort(startaddress, endaddress)

startaddress: the address of the first element of the array
endaddress: the address of the next contiguous location of the last element of the array.
So actually sort() sorts in the range of [startaddress,endaddress)
*/
int main(){
    int ar[10];
    for (int i = 0; i < 10; ++i)
    {
        cin >> ar[i];
    }

    sort(ar, ar + 10);
    for (int i = 0; i < 10; ++i)
    {
        cout << ar[i] << endl;
    }

    return 0;
}