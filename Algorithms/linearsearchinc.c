#include <bits/stdc++.h>
// will make separate functions and then call in the main function

int l_search(int ar[], int n, int x){
    int i;
    for (i = 0; i < n; i++)
        if(ar[i]==x)
            return i;
    return -1;
}   

int main(void){
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = l_search(arr, n, x);

    (result == -1) ? printf("elements is not present in the current array") : printf("elements is present at the index %d", result);

    return 0;
}