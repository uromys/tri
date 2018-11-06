#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>





int main()
{

    int tailleT=1;
    int modulo;
    bool controle= false;
    int menu;
    float temps;
    clock_t t1, t2;
do {
    printf("  taille du tableau  a trier ?");
    char c =getchar();
    if (isdigit(c)){
        ungetc(c,stdin);
         scanf("%d",&tailleT);
         controle=true;
        }else {
    printf(" %d pas caractère",tailleT);
            }

   }
    while (!controle);


controle=false;
printf("  taille des nombres?");
do {


    char c =getchar();
    if (isdigit(c)){
        ungetc(c,stdin);
         scanf("%d",&modulo);
        controle=true;
        }else {printf("insérer un nombre");}

   }
    while (!controle);







     int tableau[tailleT];
    creation(tailleT,tableau,modulo);
    printf(" \n \n \n");
controle=false;
printf("  quelle sortes de tri ?\n 1 : bulle \n 2 : quick  \n 3: rien " );
do {


    char c =getchar();
    if (isdigit(c)){
        ungetc(c,stdin);
         scanf("%d",&menu);
        controle=true;
        }

   }
    while (!controle);

    switch(menu){
    case 1 :
     t1 = clock();
    tri_bulle(tailleT,tableau);
     t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("temps = %f\n", temps);
    break;
    case 2 :
     t1 = clock();
    tri_rapide(tailleT,tableau);
    affichage(tailleT,tableau);
    t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("temps = %f\n", temps);
    break;
    }





return 0;
}

