#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>



    void tri_rapide ( int sizeT,int *tableau) {
        int mur, courant, pivot, tmp;
        if (sizeT < 2) return;
        // we take as first the one in the right
        pivot = tableau[sizeT - 1];
        mur =  0;
        courant=0;
        while (courant<sizeT) {

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
        affichage(sizeT ,tableau);


        tri_rapide(mur - 1,tableau );

        tri_rapide(sizeT - mur + 1,tableau + mur - 1 );




    }

