#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

int findLarge(int ar[], int n){
   // this is thru normal logic  
    /* int i;
    int max = ar[0];
    for(i=0; i< n; i++)
        if(ar[i]>max)
            max=ar[i];

    return max;
    */

   // we can use lib function and TC is O(n)
   // we use max_element
   return max_element (ar, ar + n);

}

int main(){

    int ar[]= {10, 324, 45, 90, 9808};
    int n = sizeof(ar) / sizeof(ar[0]);

    cout<< findLarge(ar, n);

    return 0;
}

