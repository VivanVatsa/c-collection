#include <bits/stdc++.h>
using namespace std;

// leader of an array

int allLeader(int ar[], int n){
    int max_from_right = ar[n-1];

    for (int i = n; i >= 0; i--){
            if(ar[i]<max_from_right)
                continue;
            if(ar[i]>max_from_right)
                max_from_right = ar[i];
            cout << max_from_right << " ";
    }
}
// void leader(int ar[], int n){
//     for (int i = 0; i < n; i++){
//         int j;
//         for (j = i + 1; j<n; j++){
//             if(ar[i]<ar[j])
//                 break;
//         }
//         if(j == n)
//             cout << ar[i] << " ";
//     }

// }

int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    allLeader(arr, n);
    return 0;
}