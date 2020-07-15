#include <stdio.h>
#include <conio.h>
// storing data in the 2D array 

void main(){
    int ar[3][3];
    int i, j;
    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("enter the elements a[%d][%d]", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\n printing the elements ....\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", ar[i][j]);
        }
    }
}