#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

void sortMatrix(int mat[SIZE][SIZE], int n){
    //temp matrix of n^2;

    int temp[n * n];
    int k = 0;

    for(int i=0; i<n; i++){
        for (int j = 0; j<n; j++){
            temp[k++] = mat[i][j];
        }

        //sorting the matrix;

        sort(temp, temp + k);

        k=0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
                // temp[k++] = mat[i][j];
                mat[i][j] = temp[k++];

            }
        }
}
}


void dispMatrix(int mat[SIZE][SIZE], int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}
int main(){

    int mat[SIZE][SIZE] = { { 5, 4, 7 },
                            { 1, 3, 8 },
                            { 2, 9, 6 } };
    int n = 3;

    cout << "Original Matrix:\n";
    dispMatrix(mat, n); {}
()
    sortMatrix(mat, n);

    cout << "\nMatrix After Sorting:\n";
    dispMatrix(mat, n);

    return 0;

}

/*
Create a temp[] array of size n^2. Starting with the first row one by one copy the elements of the given matrix into temp[]. Sort temp[]. Now one by one copy the elements of temp[] back to the given matrix.
*/
