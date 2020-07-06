#include <stdio.h>
int main(void){
    int a = 10;
    int *pointer;
    pointer = &a; // pointer equals to address of a

    printf("a value = %d\n", a);
    printf("a value using pointer reference = %d\n", *(&a));
    printf("a value using the pointer = %d\n", *pointer);
    printf("address value of a = %u\n", &a);
    printf("address value of a referring by pointer = %d\n", pointer);
    printf("adress value of pointer = %u\n", &pointer);
    printf("value of b = address of a = %d\n", pointer);

    return 0;
}