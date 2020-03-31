#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}   

void print(int ar[], int n){

    for (int i = 0; i < n;i++)
        cout << ar[i] << " ";

    cout << "\n";

}

void randomize(int ar[], int n){

    srand=(time(NULL));
    // srand((unsigned)time(NULL));

    for (int i = n - 1; i > 0;i++)
    {
        int j = rand() % (i+1);

        swap(&ar[i], &ar[j]);

    }
}


int main(){

    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(ar) / sizeof(ar[0]);

    randomize(ar, n);
    print(ar, n);

    return 0;


}