#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int N, M;
    int *A,*B;
    A = malloc(N*sizeof(int));
    B = malloc(M*sizeof(int));
    int *PA ,*PB;

     // La saisie de N la dimension du tableau A
    printf("Entrer la dimension du tableau A: ");
    scanf("%d",&N);

    // La saisie des elements du tableau A
    for(PA = A ; PA < A+N; PA++)
    {
        printf("Entrer l'element %d: ",PA-A);
        scanf("%d",PA);

    }
    // L'affichage des elemnts du tableau A 
    for(PA = A ; PA < A+N; PA++)
    {
        printf("%d ",*PA);
    }
    ///////////////////////////////////////////////////////////////

    // La saisie de M la dimension du tableau B
    puts("");
    printf("Entrer la dimension du tableau B: ");
    scanf("%d",&M);

    // La saisie des elements du tableau B
    for(PB = B; PB < B+M; PB++)
    {
        printf("Entrer l'element %d: ",PB-B);
        scanf("%d",PB);

    }
    // L'affichage des elemnts du tableau B 
    for(PB = B ; PB < B+M; PB++)
    {
        printf("%d ",*PB);
    }
    puts("");
    /////////////////////////////////////////////////////////////////
    
    // La reallocation dynamique du tableau A
    A = realloc(A,(N+M)*sizeof(int));

    // La copie des elements du tableau B au tableau A;
    for(PB = B, PA = A+N; PB < B + M, PA < A+N+M; PB++,PA++)
    {
        *PA = *PB; 

    }
    puts("");
    printf("La nouvelle dimension du tableau A est %d ",N+M);
    puts("");
    puts("Le tableau resultant de A+B est: ");
    for(PA = A; PA < A+N+M; PA++)
    {
        printf("%d ",*PA);
    }


    return 0;
}