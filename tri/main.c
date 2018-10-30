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
}
int tri_bulle (int tailleT,int *tableau)
{
bool order = true;
int taille = sizeof(tableau);


int i=0;
int passage=0;

    while (order)
    {
    order=false;

        for(i=0;i<tailleT;i++)
        {
            if (tableau[i]>tableau[i+1])
            {
            passage++;
            int temp=tableau[i];
                tableau[i]=tableau[i+1];
                tableau[i+1]= temp;
                order=true;
            }
        }

    }
for (i=0;i<tailleT; i++)
    {

    printf("%d,",tableau[i]);

    }
}



int main()
{

    int tailleT;
    int modulo;


    printf("  taille du tableau  a trier ?");
    scanf("%d",&tailleT);
    int tableau[tailleT];

    printf("  taille des nombres  ?");
    scanf("%d",&modulo);
    creation(tailleT,tableau,modulo);
    printf(" \n \n \n");
    tri_bulle(tailleT,tableau);





return 0;
}

