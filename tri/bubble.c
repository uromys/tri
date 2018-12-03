#include <stdbool.h>
int tri_bulle (int sizeT,int *tableau)
{
bool order = true;
int taille = sizeof(tableau);


int i=0;
int passage=0;
int count=0;

    while (order)
    {
    order=false;

        for(i=0;i<sizeT;i++)
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
        count++;
        printf("%d steps \n",count);
affichage(sizeT,tableau);
    }

}
