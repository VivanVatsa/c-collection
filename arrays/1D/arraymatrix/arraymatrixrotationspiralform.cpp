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
using the normal form

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

Algorithm:

    create a recursive function that takes a matrix and some variables (k – starting row index, m – ending row index, l – starting column index, n – ending column index) as parameters
    Check the base cases (stating index is less than or equal to ending index) and print the boundary elements in clockwise manner
    Print the top row, i.e. Print the elements of kth row from column index l to n, and increase the count of k.
    Print the right column, i.e. Print the last column or n-1th column from row index k to m and decrease the count of n.
    Print the bottom row, i.e. if k > m, then print the elements of m-1th row from column n-1 to l and decrease the count of m
    Print the left column, i.e. if l < n, then print the elements of lth column from m-1th row to k and increase the count of l.
    Call the function recursively with the values of starting and ending indices of rows and columns.

    **this spiral form is important as it has been asked in the coding question of google and amazon

*/

// this program is falling under the divide and conquer algorithm(diving the problem into sub equal parts and then solving it one by one)
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
        //printing first row 
    for(int p=i; p<n; p++)
        cout << ar[i][p] << " ";
        //print last column
    for(int p = i+1; p<n; p++)
        cout << ar[p][n - 1] << " ";
        //printing last row if last and first row are not same
        if((m-1) !=i)
            for (int p = n - 2; p >= j;p--)
            cout<<ar[m-1][p]<<" ";
        //printing first column if last and first column arent same
        if((n-1) !=j)
            for (int p = m - 2; p > i; p--)
                cout << ar[p][j] << " ";

            print(ar, i+1, j+1, m-1, n-1);

}

int main(){
    
    int a[R][C] = { { 1, 2, 3, 4 }, 
                    { 5, 6, 7, 8 }, 
                    { 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16 } }; 
  
    print(a, 0, 0, R, C); 
    return 0; 
}
