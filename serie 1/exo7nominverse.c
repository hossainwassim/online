#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *nom;
    char *p1,*p2;
    int n=30;
    nom = malloc(n*sizeof(char));
    char *temp;
    printf("Entrer votre nom: ");
    gets(nom);
    puts(nom);
    temp = malloc(n*sizeof(char));
    for(p1 = nom, p2 = nom+strlen(nom)-1; p1 < p2; p1++,p2--)
    {   
        *temp = *p1;
        *p1   = *p2;
        *p2   = *temp;
    }



    puts(nom);
    return 0;
}