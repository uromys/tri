
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int clone( int sizeT,int *tableau,int *tableau2)

{

int i=0;

for (i=0;i<sizeT; i++)
    {


    tableau2[i]=tableau[i];

    printf("%d,",tableau2[i]);
    }
    return *tableau;
}
