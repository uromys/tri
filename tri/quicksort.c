#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>


    void tri_rapide ( int tailleT,int *tableau) {
        int mur, courant, pivot, tmp;
        if (tailleT < 2) return;
        // On prend comme pivot l element le plus a droite
        pivot = tableau[tailleT - 1];
        mur =  0;
        courant=0;
        while (courant<tailleT) {
            if (tableau[courant] <= pivot) {
                if (mur != courant) {
                    tmp=tableau[courant];
                    tableau[courant]=tableau[mur];
                    tableau[mur]=tmp;
                }
                mur ++;
            }
            courant ++;
        }
        tri_rapide(mur - 1,tableau );
        tri_rapide(tailleT - mur + 1,tableau + mur - 1 );
    }

