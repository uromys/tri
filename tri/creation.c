#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int creation( int tailleT,int *tableau, int modulo)

{
int i=0;
srand(time(NULL));
for (i=0;i<tailleT; i++)
    {
    int aleatoire;
    aleatoire=rand()%modulo;
    tableau[i]=aleatoire;

    printf("%d,",tableau[i]);
    }
    return *tableau;
}
