#include <bits/stdc++.h>
using namespace std;

// rotation one by one

void leftRotatebyOne(int ar[], int n){
    int temp = ar[0], i;
    for(i=0; i<n-1; i++){
        ar[i] = ar[i + 1];

    }
    ar[i] = temp;

}
 
void n_of_rot(int ar[], int d, int n) {
    for (int i = 0; i < d;i++)
        leftRotatebyOne(ar, n);

}

void disp(int ar[], int n){
        for (int i = 0; i < n; i++) {
            cout << ar[i] << " ";
        }
                
}

int main(){
    int ar[] = {1, 2, 3, 4, 5};
    int n = sizeof(ar) / sizeof(ar[0]);

    n_of_rot(ar, 4, n);
    disp(ar, n);

    return 0;
}