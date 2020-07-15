#include <bits/stdc++.h>
using namespace std;

int bitsort(int ar[], int n){

    sort(ar,ar+n);
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
}

int main(){
    //int ar[] = {0, 1, 2, 0, 1, 2};
    //int ar[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int ar[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(ar) / sizeof(ar[0]);

bitsort(ar, n);

return 0;
}