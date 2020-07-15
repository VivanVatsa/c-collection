#include <bits/stdc++.h>
using namespace std;

int check(int ar[], int n)
{
    for (int i = 0; i < n;i++)
    {
        if(ar[i]!=-1 && ar[i]!=i)
        {
            int x = ar[i];

            while (ar[x]!=-1 && ar[x]!=x)
            {
                int y=ar[x];
                ar[x] = x;
                x = y;

            }
            ar[x] = x;

            if(ar[i] !=i)
            {
                ar[i] = -1;
            }
        }
    }
}

int main()
{
    int ar[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};

    int n = sizeof(ar) / sizeof(ar[0]);
    check(ar, n);

    for (int i = 0; i < n; i++)
    std::cout << ar[i] << " "<< std::endl;
}

/* alternate method called swap method with complexity of O(n)

#include<stdio.h> 

int main() 
{ 
	int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	for (int i = 0; i < n;) 
	{ 
		if (arr[i] >= 0 && arr[i] != i) 
		arr[arr[i]] = (arr[arr[i]] + arr[i]) - 
						(arr[i] = arr[arr[i]]); 
		else
			i++; 
	} 
	for(int i = 0; i < n; i++) 
		printf("%d ",arr[i]); 
		return 0; 
} 

*/