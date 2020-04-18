// search operation in aray(unsorted)

#include <bits/stdc++.h>
using namespace std;

int searchElements(int ar[], int n, int finder){

    int i;
    for (i = 0; i < n; i++)
        if(ar[i]==finder)
            return i;

    return -1;
}

int main(){
    int ar[] = {12, 34, 10, 6, 40};
    int n = sizeof(ar) / sizeof(ar[0]);

    int finder = 6; // using second last element as the search element which will give us the position in return
    int position = searchElements(ar, n, finder);

    if(position == -1)
        cout << "element was not found dumbo";
    else
        cout << "element is at the position: " << position + 1;

    return 0;
}