#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int creation( int tailleT,int *tableau, int modulo)

{
int i=0;
srand(time(NULL));
for (i=0;i<tailleT; i++)
    {
    int aleatoire;
    aleatoire=rand()%modulo;
    tableau[i]=aleatoire;

    printf("%d",tableau[i]);
    }
}
int main()
{
    int tableau[500];
    int tailleT;
    int modulo;


    printf("  taille du tableau  a trier ?");
    scanf("%d",&tailleT);
    if (tailleT>500)
        {
        tailleT=500;}
    printf("  taille des nombres  ?");
    scanf("%d",&modulo);
    creation(tailleT,tableau,modulo);





return 0;
}

