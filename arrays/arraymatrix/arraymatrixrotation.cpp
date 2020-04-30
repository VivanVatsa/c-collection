#include <bits/stdc++.h>
using namespace std;
#define ROW 4
#define COL 4

//to rotate the matrix mat[][] of size row and col
//initially m = ROW & n = COL
void rotateMatrix(int mat[ROW][COL], int m, int n){
    int row = 0;
    int col = 0;
    int prev, current;

    // row = starting row index
    //m = ending row index
    // col = starting column index
    //n = ending column index 
    // i = iterator

    while (row < m && col <n)
    {
        if (row + 1 == m || col + 1 == n)
            break;
        
        //store the first element of next row
        //this will replace first element of current row
        prev = mat[row + 1][col];

        //move first row elements from the remaining row
        for (int i = 0; i < n; i++){
            current = mat[row][i];
            mat[row][i] = prev;
            prev = current;

        }
        row++;

        //move last column elements from the remaining column
        for (int i = n - 1; i>=col; i--){
            current = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = current;
        }
        n--;

        //move elements of last row from remaining rows
        if(row < m){
            for(int i=n-1; i>=col; i--){
                current = mat[m - 1][i];
                mat[m-1][i] = prev;
                prev = current;

            }
        }
        m--;

        //move first column elements from remaining row

        if(col < n){
            for(int i=m-1; i>=row; i--){
                current=mat[i][col];
                mat[i][col] = prev;
                prev = current;

            }
        }
        col++;

    }
    // displaying the rotated array
    for (int i = 0; i<ROW; i++){
        for (int j = 0; j<COL; j++)
            cout << mat[i][j] << " ";
        cout << endl;

    }
}

int main()
{
    int a[ROW][COL] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

    // Tese Case 2
    /* int a[R][C] = {{1, 2, 3}, 
                      {4, 5, 6}, 
                      {7, 8, 9} 
                     }; 
     */
    rotateMatrix(a, ROW, COL);
    return 0;
}
//------------------------
    /*
To rotate a ring, we need to do following.
    1) Move elements of top row.
    2) Move elements of last column.
    3) Move elements of bottom row.
    4) Move elements of first column.
Repeat above steps for inner ring while there is an inner ring.

Input
1    2    3
4    5    6
7    8    9

Output:
4    1    2
7    5    3
8    9    6

For 4*4 matrix
Input:
1    2    3    4    
5    6    7    8
9    10   11   12
13   14   15   16

Output:
5    1    2    3
9    10   6    4
13   11   7    8
14   15   16   12
*/