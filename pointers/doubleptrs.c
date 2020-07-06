#include <stdio.h>
int main(void){
    int a = 5;
    int *b; // stores the  address value of the integer
    // this is the double pointer: pointing to the value of the pointer who stores the address values of the integer
    int **c; // stores the address value of the pointer that stores the address value of the integer
    b = &a;
    c = &b;
    printf("value of a = %d\n", a);
    printf("value of a using pointer reference= %d\n", *(&a));
    printf("value of a using the pointer = %d\n", *b);
    printf("value of a using the double pointer = %d\n", **c);
    printf("value of b = address of a = %u\n", b);
    printf("value of c = address of b = %u\n", c);
    printf("address of a = %u\n", &a);
    printf("address of a with single pointer ref = %u\n", b);
    printf("address of a by double ptr ref = %u\n", *c);
    printf("address of b = %u\n", &b);
    printf("address of b using c = %u\n", c);
    printf("address of c = %u\n", &c);
    return 0;
}