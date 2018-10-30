#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int creation( int tailleT, int tableau)
{
int compteur;
srand(time(NULL));
for (compteur=0;compteur<tailleT; compteur++)
    {
    int aleatoire;
    aleatoire=rand();
    tableau[compteur]=aleatoire;

    printf("%d\n",tableau[compteur]);
    }
}
int main()
{
    int tableau[100];
    int tailleT;
    int I;
    int J;

    printf("  taille du tableau  a trier ?");
    scanf("%d",&tailleT);
    creation(tailleT,tableau)





return O;
}

