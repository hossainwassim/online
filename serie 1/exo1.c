#include <stdio.h>
int main ()
{
    int A = 1, B = 2, C = 3;
    int *P1, *P2;
    
    P1 = &A; P2 = &C;
    printf("1--     %d \t%d \t%d \t %d\t %d\n",A,B,C,P1,P2);

    *P1 = (*P2)++;    
    printf("2--     %d \t%d \t%d \t %d\t %d\n",A,B,C,P1,P2);
    
    P1 = P2; 
    printf("3--     %d \t%d \t%d \t %d\t %d\n",A,B,C,P1,P2);

    P2 = &B;
    printf("4--     %d \t%d \t%d \t %d\t %d\n",A,B,C,P1,P2);

    *P1 -= *P2;
    printf("5--     %d \t%d \t%d \t %d\t %d\n",A,B,C,P1,P2);

    ++*P2;
    printf("6--     %d \t%d \t%d \t %d\t %d\n",A,B,C,P1,P2);
    
    (*P1) *= *P2;
    printf("7--     %d \t%d \t%d \t %d\t %d\n",A,B,C,P1,P2);

    return 0;
}