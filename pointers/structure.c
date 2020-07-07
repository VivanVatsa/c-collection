// structure in C
#include <stdio.h>
void main(){
    struct employee{
        int id;
        float salary;
        int mobile;
    };

    struct employee e1, e2, e3;
    printf("%d %f %d", &e1.id, &e1.salary, &e1.mobile);
    scanf("%d %f %d", &e2.id, &e2.salary, &e2.mobile);
    scanf("%d %f %d", &e3.id, &e3.salary, &e3.mobile);
    printf("\n entered result");
    printf("\n%d %f %d", e1.id, e1.salary, e1.mobile);
    printf("\n%d%f %d", e2.id, e2.salary, e2.mobile);
    printf("\n%d %f %d", e3.id, e3.salary, e3.mobile);

}