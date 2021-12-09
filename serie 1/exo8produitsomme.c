#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sommeproduittab(int *t, int n, int *pr, int *sm)
{   
    int somme = 0, produit = 1;
    int i;
    for(i = 0; i < n; i++)
    {
        produit = produit * t[i];
        somme   = somme + t[i];

    }
    *pr = produit;
    *sm = somme;
}
int main ()
{
    int a,b;
    int note [8] = {1,2,3,4,5,6,7,8};
    printf("le tableau est:\n");
    for(int i = 0; i < 8; i++)
    printf("%d ",note[i]);
    puts("");
    sommeproduittab(note,8,&a,&b);
    printf("Le produit des elements du tableau est: %d\n",a);
    printf("La somme des elements du tableau est: %d\n",b);


    
    
    return 0;
}