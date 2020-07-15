#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

//order stats K’th Smallest/Largest Element in Unsorted Array

int kthsmall(int ar[], int n, int k){
    //first sort the array
    //then return k'th 
    sort(ar, ar + n);

    return ar[k-1];

}


int main(){
    int ar[] = {12, 3, 5, 7, 19};
    int n = sizeof(ar) / sizeof(ar[0]);
    int k=4;

    cout<<"k'th smallest element is"<<kthsmall(ar, n, k);

    return 0;
    
}