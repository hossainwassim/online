
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ch;
    char *p1,*p2;
    int n,palin=0;
    //n=3;
    ch = malloc(n*sizeof(char));
    puts("Entrer une chaine de caractere");
    gets(ch);
    n = strlen(ch);
    printf("le nombre de caractere de la chaine est %d",n);
    
    for(p1 = ch, p2 = ch+n-1; p1 < p2; p1++,p2--)
    {
        if(*p1 != *p2)
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
