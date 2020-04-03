#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

void PrintElements(int ar[], int ar_size, int n){

    vector<int> copy_ar(ar, ar+ar_size);;

    sort(copy_ar.begin(), copy_ar.begin() + ar_size);

    for (int i = 0; i < ar_size; i++)
        if(binary_search(copy_ar.begin(),copy_ar.begin()+n, ar[i]))
            cout << ar[i] << " ";

}

int main(){

    int ar[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int ar_size = sizeof(ar) / sizeof(ar[0]);
    int n = 3;
    PrintElements(ar, ar_size, n);

    return 0;

}
