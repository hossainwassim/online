#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int x,n;
    int *A = malloc(n*sizeof(int));
    int *p1,*p2;

    printf("Veuillez entrer la dimension du tableau: ");
    scanf("%d",&n);
    //la saisie du tableau 
    puts("");
    for(p1 = A; p1 < A + n; p1++ )
    {
        printf("Entrer l'element %d: ",p1-A);
        scanf("%d",p1);
    }
    // L'affichage du tableau
    puts("Le tableau que vous avez entre est:");
    for(p1 = A; p1 < A + n; p1++ )
    {
        printf("%d ",*p1);

    }
    //La saisie de x nombre a supprimer
    printf("\nVeuillez entrer x le nombre que vous voulez supprimer du tableau: ");
    scanf("%d",&x);
    // La suppression de x

    for(p1 = p2 = A; p1 < A+n; p1++)
    {
        *p2 = *p1;
        if(*p2 != x)
        {
            p2++;
        }
    }

    // L'affichage du tableau apres la suppression de x
    printf("Le tableau apres la suppression de x = %d est: ",x);
    puts("");
    for(p1 = A; p1 < p2; p1++ )
    {
        printf("%d ",*p1);

    }

    return 0;
}