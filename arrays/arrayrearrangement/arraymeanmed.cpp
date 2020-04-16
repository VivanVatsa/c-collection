#include <bits/stdc++.h>
using namespace std;

int mean(int ar[], int n){
    //mean = sum of all elements / total no of elements
    int sum = 0;
    // int count = 0;

    for (int i = 0; i<n; i++)
        sum = sum + ar[i];

    
  //  for(int j=0; j<n; j++);
    //    count++;

    int mean = (sum / n);
    // int mean = (sum / count);
    return mean;
}

int median(int ar[], int n){ // this is when the array is sorted
    int high= ar[n-1];
    int low = ar[0];
    int mid=0;

    int median;

    // if array not sorted 
    // then use lib func sort to sort then check the condition

    for(int i=0; i<n; i++)
        if(n%2==0)
        {    mid = (high + low) /2;
            
           return median=(ar[mid]+ar[mid+1])/2;
        }
        else{
            return median = (high + low) / 2;
        }
            

}

int main(){

    int ar[] = {1, 2, 3, 4, 5};
    int n = sizeof(ar) / sizeof(ar[0]);

    cout<<"mean of the array is "<<mean(ar, n);

    cout << "median of the array is" << median(ar, n);


    return 0;

}