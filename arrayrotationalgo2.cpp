#include <bits/stdc++.h>
using namespace std;

// array rotation with juggling algorithm



int gcd(int a, int b) {

    if(b==0)
        return a;

    else
        return gcd(b, a % b);
}

void leftrotate(int ar[], int d, int n){

    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d;i++){
        int temp = ar[i];
        int j = i;

        while(1){
            int k = j + d;
            if(k>=n)
                k = k - n;
            
            if(k==i)
                break;

            ar[j] = ar[k];
            j = k;

        }

        ar[j] = temp;

    }
}

void printArray(int ar[], int size){

    for (int i = 0; i < size;i++)
        cout << ar[i] << " ";

}

int main(){

    int ar[] = {1, 2, 3, 4, 5};

    int n = sizeof(ar) / sizeof(ar[0]);

    leftrotate(ar, 2, n);
    printArray(ar, n);
}
