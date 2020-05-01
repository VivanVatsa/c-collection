#include <bits/stdc++.h>
using namespace std;

// C++ program to rotate a matrix by 90 degrees
#include <bits/stdc++.h>
#define N 4
using namespace std;

void displayMatrix(int mat[N][N]);

// An Inplace function to rotate a N x N matrix
// by 90 degrees in anti-clockwise direction
void rotateMatrix(int mat[][N])
{
    // Consider all squares one by one
    for (int x = 0; x < N / 2; x++)
    {
        // Consider elements in group of 4 in
        // current square
        for (int y = x; y < N - x - 1; y++)
        {
            // store current cell in temp variable
            int temp = mat[x][y];
            // move values from right to top
            mat[x][y] = mat[y][N - 1 - x];
            // move values from bottom to right
            mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];
            // move values from left to bottom
            mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];
            // assign temp to left
            mat[N - 1 - y][x] = temp;
        }
    }
}

// Function to print the matrix
void displayMatrix(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);

        printf("\n");
    }
    printf("\n");
}

/* Driver program to test above functions */
int main()
{
    // Test Case 1
    int mat[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // Tese Case 2
    /* int mat[N][N] = { 
						{1, 2, 3}, 
						{4, 5, 6}, 
						{7, 8, 9} 
					}; 
	*/

    // Tese Case 3
    /*int mat[N][N] = { 
					{1, 2}, 
					{4, 5} 
				};*/

    // displayMatrix(mat);
    rotateMatrix(mat);

    // Print rotated matrix
    displayMatrix(mat);

    return 0;
}

/*
Approach: To solve the question without any extra space, rotate the array in form of squares, dividing the matrix into squares or cycles. For example,
A 4 X 4 matrix will have 2 cycles. The first cycle is formed by its 1st row, last column, last row and 1st column. The second cycle is formed by 2nd row, second-last column, second-last row and 2nd column. The idea is for each square cycle, swap the elements involved with the corresponding cell in the matrix in anti-clockwise direction i.e. from top to left, left to bottom, bottom to right and from right to top one at a time using nothing but a temporary variable to achieve this.

Algorithm:

    There is N/2 squares or cycles in a matrix of side N. Process a square one at a time. Run a loop to traverse the matrix a cycle at a time, i.e loop from 0 to N/2 – 1, loop counter is i
    Consider elements in group of 4 in current square, rotate the 4 elements at a time. So the number of such groups in a cycle is N – 2*i.
    So run a loop in each cycle from x to N – x – 1, loop counter is y
    The elements in the current group is (x, y), (y, N-1-x), (N-1-x, N-1-y), (N-1-y, x), now rotate the these 4 elements, i.e (x, y) <- (y, N-1-x), (y, N-1-x)<- (N-1-x, N-1-y), (N-1-x, N-1-y)<- (N-1-y, x), (N-1-y, x)<- (x, y)
    Print the matrix.
