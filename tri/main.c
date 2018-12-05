#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>





int main()
{

    int sizeT=1;
    int modulo;
    bool controle= false;
    int menu;
    float temps;
    clock_t t1, t2;
    printf("  size of array  ?");
do {

    char c =getchar();
    if (isdigit(c)){
        ungetc(c,stdin);
         scanf("%d",&sizeT);
         controle=true;
        }else {
    printf(" insert a number pls");
            }

   }
    while (!controle);


controle=false;
printf("  size of numbers ?");
do {


    char c =getchar();
    if (isdigit(c)){
        ungetc(c,stdin);
         scanf("%d",&modulo);
        controle=true;
        }else {printf(" \n insert a number");}

   }
    while (!controle);







     int tableau[sizeT];
     int tableau2[sizeT];
    creation(sizeT,tableau,modulo);
    clone(sizeT,tableau,tableau2);
    printf(" \n \n \n");
controle=false;
printf("  what kind of sort  ?\n 1 : bubble \n 2 : quicksort \n 3 : mergesort   " );
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
    tri_bulle(sizeT,tableau);
     t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("temps = %f\n", temps);
    break;
    case 2 :
     t1 = clock();
    tri_rapide(sizeT,tableau);
    affichage(sizeT,tableau);
    t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("time = %f\n", temps);
    break;
    case 3 :
     t1 = clock();
    tri_fusion(sizeT,tableau);
    affichage(sizeT,tableau);
    t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("time = %f\n", temps);
    break;
    }


controle=false;
printf("  Do you want to compare the time with another sort ?  ?\n 1 : bubble \n 2 : quicksort \n 3 : mergesort  \n 4: end " );
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
    tri_bulle(sizeT,tableau2);
     t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("temps = %f\n", temps);
    break;
    case 2 :
     t1 = clock();
    tri_rapide(sizeT,tableau2);
    affichage(sizeT,tableau2);
    t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("time = %f\n", temps);
    break;
    case 3 :
     t1 = clock();
    tri_fusion(sizeT,tableau2);
    affichage(sizeT,tableau2);
    t2 = clock();
    temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("time = %f\n", temps);
    break;
    case 4 :
    break;
    }







}

