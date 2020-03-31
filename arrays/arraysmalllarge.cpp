#include <bits/stdc++.h>
using namespace std;

void rearrange(int ar[], int n){

    sort(ar, ar + n); // sorting the elements

    int tempAr[n]; // u store the rearranged array after work is done

    int arindex = 0; // starting from first element it will start storing the elements onebyone

    for (int i = 0, j = n - 1; i <= n / 2 || j > n / 2; i++, j--){

        tempAr[arindex] = ar[i];
        arindex++;
        tempAr[arindex] = ar[j];
        arindex++;
    }

    //modifying the original array by storing all the values in it

    for(int i=0; i<n; i++){
        ar[i]=tempAr[i];

    }    
}

int main(){
    int ar[] = {5, 8, 1, 4, 2, 9, 3, 7, 6};
    int n = sizeof(ar) / sizeof(ar[0]);

    rearrange(ar, n);

    for (int i = 0; i < n;i++)
        cout << ar[i] << " ";

    return 0;
    

}