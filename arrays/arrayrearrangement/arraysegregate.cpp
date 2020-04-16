#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int *a, int *b);

void segregate(int ar[], int n){

    int index_left = 0;
    int index_right = n - 1;

    while(index_left < index_right){

        //left index increments after checking of even;
        while(ar[index_left]%2==0 && index_left < index_right)
            index_left++;

        //right index increment after checking of odd;
        while(ar[index_right]%2==1 && index_left<index_right)
            index_right--;
        
        if(index_left<index_right){

            swap(&ar[index_left], &ar[index_right]);
            index_left++;
            index_right--;  
            
        }
    }
}

// swapping elements using pointers method
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b = temp;
}


int main(){
    int ar[] = {12, 34, 45, 9, 8, 90, 3};
    int size = sizeof(ar) / sizeof(ar[0]);

    cout << "array before segragation";
    for (int i = 0; i < size; i++)
        cout << ar[i] << " ";

    int i = 0;
    segregate(ar, size);

    cout<<"array after segragation is ";

    for (int i = 0; i<size; i++)
        cout << ar[i] << " ";

        return 0;

}