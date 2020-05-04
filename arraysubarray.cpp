//We can run two nested loops, the outer loop picks starting element and inner loop considers all elements on right of the picked elements as ending element of subarray.

#include <bits/stdc++.h>
using namespace std;

void subArray(int ar[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            //print subarray between current starting and ending points
            for (int k = i; k <= j; k++)
                cout << ar[k] << " ";
            cout << endl;
        }
    }
}


// Driver program
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    subArray(arr, n);
    return 0;
}
