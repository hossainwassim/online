#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[] = {12, 23, 34, 45, 56, 78, 78, 89, 90};
    int *P;
    P = A;
    printf("%d\t",*P+2);
    printf("%d\t",*(P+2));
    printf("%d\t",&P+1);
    printf("%d\t",&A[4]-3);
    printf("%d\t",A+3);
    printf("\n----------------------------------------------\n");
    printf("%d\t",&A[7]-P);
    printf("%d\t",(P+(*P-10)));
    printf("%d\t",(*(P+ *(P+8)-A[7])));
    return 0;
}