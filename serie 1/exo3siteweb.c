
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 /* Déclarations */
 char INTRO[500]; /* chaîne pour l'introduction des données   */
 char *TEXTE[10]; /* Tableau des pointeurs sur les 10 chaînes */
 char *PAIDE; /* pointeur d'aide pour l'échange des pointeurs */
  int I,J;     /* indices courants */
 /* Saisie des données et allocation dynamique de mémoire */
 puts("Introduire 10 phrases terminées chaque fois"
      " par un retour à la ligne :");
 for (I=0; I<10; I++)
     {
      /* Lecture d'une phrase */
      printf("Phrase %d : ",I);
      gets(INTRO);
      /* Réservation de la mémoire */
      TEXTE[I] = malloc(strlen(INTRO)+1);
      /* S'il y a assez de mémoire, ... */
      if (TEXTE[I])
           /* copier la phrase à l'adresse */
           /* fournie par malloc,          */
           strcpy(TEXTE[I], INTRO);
      else
          {
           /* sinon afficher un message d'erreur */
           printf("\aPas assez de mémoire \n");
           /* et quitter le programme. */
           exit(-1);
          }
      }
 /* Afficher le tableau donné */
 puts("Contenu du tableau donné :");
 for (I=0; I<10; I++)   puts(TEXTE[I]);
 /* Inverser l'ordre des phrases avec le pointeur PAIDE */
 for (I=0,J=9 ; I<J ; I++,J--)
     {
      PAIDE    = TEXTE[I];
      TEXTE[I] = TEXTE[J];
      TEXTE[J] = PAIDE;
     }
  /* Afficher le tableau résultat */
 puts("Contenu du tableau résultat :");
 for (I=0; I<10; I++)   puts(TEXTE[I]);
 return 0;
}
