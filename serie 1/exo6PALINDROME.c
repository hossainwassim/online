
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ch;
    int i,j,n,palin=0;
    //n=3;
    ch = malloc(n*sizeof(char));
    puts("Entrer une chaine de caractere");
    gets(ch);
    n = strlen(ch);
    printf("le nombre de caractere de la chaine est %d",n);
    
    for(i = 0, j = n-1; i < j; i++,j--)
    {
        if(ch[i] != ch[j])
        {
            palin = 1;
        }
    }
    
    if(palin == 0)
    {
        printf("\nla chaine de caractere est PALINDROME");
    }
    else
    {
        printf("\nla chaine de caractere N'EST pas palindrome");
    }
    
    

    return 0;
}
