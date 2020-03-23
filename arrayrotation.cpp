#include <bits/stdc++.h>
using namespace std;

// cyclic array rotation

void rotate (int ar[], int n){

    int x = ar[n - 1], i;
    for (i = n - 1; i > 0;i--)
        ar[i] = ar[i - 1];
        ar[0] = x;
}

int main(){

    int ar[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(ar) / sizeof(ar[0]);

    cout << "given array is \n";
    for (int i = 0; i < n; i++){
        cout << ar[i];
    }

    rotate(ar, n);

    cout << "rotated array is \n";
    for (int i = 0; i < n;i++){
        cout << ar[i];

    }

    return 0;

}




/* Block Swap Method
void printArray(int arr[], int size);
void swap(int arr[], int fi, int si, int d);

void leftRotate(int arr[], int d, int n)
{
    /* Return If number of elements to be rotated 
	is zero or equal to array size 
    if (d == 0 || d == n)
        return;

    /*If number of elements to be rotated 
	is exactly half of array size 
    if (n - d == d)
    {
        swap(arr, 0, n - d, d);
        return;
    }

    /* If A is shorter
    if (d < n - d)
    {
        swap(arr, 0, n - d, d);
        leftRotate(arr, d, n - d);
    }
    else /* If B is shorter
    {
        swap(arr, 0, d, n - d);
        leftRotate(arr + n - d, 2 * d - n, d); /*This is tricky
    }
}
*/

/* function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
*/

/*This function swaps d elements starting at index fi 
with d elements starting at index si 
void swap(int arr[], int fi, int si, int d)
{
    int i, temp;
    for (i = 0; i < d; i++)
    {
        temp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}

*/

//reversal algorithm
/*Function to reverse arr[] from index start to end
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Function to left rotate arr[] of size n by d 
void leftRotate(int arr[], int d, int n)
{
    if (d == 0)
        return;
    rvereseArray(arr, 0, d - 1);
    rvereseArray(arr, d, n - 1);
    rvereseArray(arr, 0, n - 1);
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // in case the rotating factor is
    // greater than array length
    d = d % n;

    // Function calling
    leftRotate(arr, d, n);
    printArray(arr, n);

    return 0;
}
*/

// array rotation with juggling algorithm
/* 
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
*/

/*
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

    n_of_rot(ar, 3, n);
    disp(ar, n);

    return 0;
}
*/
