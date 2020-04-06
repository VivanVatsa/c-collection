// this has to be done in c language 
//this code is to find the max and min elements of the array using the min no of comparison.'
//it can be done with linear search method but it is too lenghty and not effecient 
//i am comparing in pairs (divide and conquer paradigm)

#include <stdio.h>
#include <bits/stdc++.h>

struct pair{
    int max;
    int min;
};
struct pair min_max(int ar[], int n){
    struct pair min_max;
    int i;
    
    if(n%2==0){
        if(ar[0] > ar[1]){
            min_max.max = ar[0];
            min_max.min = ar[1];

        }
        else
        {
            min_max.max = ar[1];
            min_max.min = ar[0];

        }
        i = 2; // loop index starts from 2
    }

    else{
        min_max.min = ar[1];
        min_max.max = ar[0];
        i = 1; /* loop index starting*/
    }

/* In the while loop, pick elements in pair and  
     compare the pair with max and min so far */
while (i < n - 1)
{
    if (ar[i] > ar[i + 1])
    {
        if (ar[i] > min_max.max)
            min_max.max = ar[i];
        if (ar[i + 1] < min_max.min)
            min_max.min = ar[i + 1];
    }
    else
    {
        if (ar[i + 1] > min_max.max)
            min_max.max = ar[i + 1];
        if (ar[i] < min_max.min)
            min_max.min = ar[i];
    }
    i += 2; /* Increment the index by 2 as two  
               elements are processed in loop */
}

return min_max;
}

/* Driver program to test above function */
int main()
{
    int ar[] = {1000, 11, 445, 1, 330, 3000};
    int ar_size = 6;
    struct pair min_max = min_max(ar, ar_size);
    printf("nMinimum element is %d", min_max.min);
    printf("nMaximum element is %d", min_max.max);
    getchar();
}
