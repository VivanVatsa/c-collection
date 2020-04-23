/* Input:
        1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 


Input:
        1   2   3   4  5   6
        7   8   9  10  11  12
        13  14  15 16  17  18
Output: 
1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11

Approach: The above problem can be solved using four for loops which prints all the elements. Every for loop defines a single direction movement along with the matrix. The first for loop represents the movement from left to right, whereas the second crawl represents the movement from top to bottom, the third represents the movement from the right to left, and the fourth represents the movement from bottom to up. The four variable along with their use is given below.

k - starting row index 
m - ending row index 
l - starting column index 
n - ending column index 
implementation of simple matrix: -

#include <bits/stdc++.h> 
using namespace std; 
#define R 3 
#define C 6 

void spiralPrint(int m, int n, int a[R][C]) 
{ 
	int i, k = 0, l = 0; 

	/* k - starting row index 
		m - ending row index 
		l - starting column index 
		n - ending column index 
		i - iterator 
	

while (k < m && l < n)
{
    /* Print the first row from 
			the remaining rows 
    for (i = l; i < n; ++i)
    {
        cout << a[k][i] << " ";
    }
    k++;

    /* Print the last column 
		from the remaining columns 
    for (i = k; i < m; ++i)
    {
        cout << a[i][n - 1] << " ";
    }
    n--;

    /* Print the last row from 
				the remaining rows 
    if (k < m)
    {
        for (i = n - 1; i >= l; --i)
        {
            cout << a[m - 1][i] << " ";
        }
        m--;
    }

    /* Print the first column from 
				the remaining columns 
    if (l < n)
    {
        for (i = m - 1; i >= k; --i)
        {
            cout << a[i][l] << " ";
        }
        l++;
    }
}
}

 Driver program to test above functions 
int main()
{
    int a[R][C] = {{1, 2, 3, 4, 5, 6},
                   {7, 8, 9, 10, 11, 12},
                   {13, 14, 15, 16, 17, 18}};

    spiralPrint(R, C, a);
    return 0;
}

Recursive approach: -
The above problem can be solved by printing the boundary of the Matrix recursively. In each recursive call, we decrease the dimensions of the matrix.

*/


#include <bits/stdc++.h>
using namespace std;

#define R 4
#define C 4
//Function for printing matrix in spiral
// form i, j: Start index of matrix, row
// and column respectively m, n: End index
// of matrix row and column respectively
void print(int ar[R][C], int i, int j, int m, int n){

    //first case : if i & j doesnt lie in the matrix
    if(i>=m || j>=n)
        return;
    for(int p=i; p<n; p++)
        cout << ar[i][p] << " ";
    


}