// kadane's algorithm 
/*
Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far
*/

#include <bits/stdc++.h>
#include <climits>
using namespace std;

int kadanealgo(int ar[], int n){
  int max_so_far=0;
  int max_ending_here = 0;

  for(int i=1; i<n; i++){
    max_ending_here=max_ending_here+ar[i];

    if (max_so_far < max_ending_here)
      {max_so_far = max_ending_here;}

    if(max_ending_here<0)
    { max_ending_here = 0;}
  }
  return max_so_far;
}

int main(){
  int ar[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int n = sizeof(ar) / sizeof(ar[0]);

  int maxsubarray = kadanealgo(ar, n);
  cout << "Maximum Contiguous Array " << maxsubarray;

  return 0;
}