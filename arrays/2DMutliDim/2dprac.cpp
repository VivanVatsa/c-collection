#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
    int n; cin>>n;
    int ar[n][n];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin>>ar[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ar[i][j] << " \n ";
        }
    }
}