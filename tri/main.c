#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>





int main()
{

    int tailleT=1;
    int modulo;

do {
    printf("  taille du tableau  a trier ?");

    scanf("%d",&tailleT);
    printf("%d",isdigit(tailleT));}
    while (isdigit( tailleT)==0);




    printf("  taille des nombres  ?");

    scanf("%d",&modulo);
     //int tableau[tailleT];
    //creation(tailleT,tableau,modulo);
    printf(" \n \n \n");
    //tri_bulle(tailleT,tableau);





return 0;
}

