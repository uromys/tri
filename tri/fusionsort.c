void fusion(int *tableau,int start1,int end1,int end2)
        {
        int *array;
        int start2=end1+1;
        int count1=start1;
        int count2=start2;
        int i;

        array=malloc((end1-start1+1)*sizeof(int));


        for(i=start1;i<=end1;i++){
            array[i-start1]=tableau[i];//we copy the first array
            }

        for(i=start1;i<=end2;i++){
            if (count1==start2) // first array is ok
                {
                break;
                }
            else if (count2==(end2+1)) //second array ok
                {
                tableau[i]=array[count1-start1]; // we add 2 to 1
                count1++;
                }
            else if (array[count1-start1]<tableau[count2])
                {
                tableau[i]=array[count1-start1]; //we add a new element to the first array
                count1++;
                }
            else
                {
                tableau[i]=tableau[count2]; //same 2
                count2++;
                }
            }
        free(array);//free space to use it again , array is stock in tableau
        }


void tri_fusion_bis(int *tableau,int deb,int fin)
        {
        if (deb!=fin)
            {
            int milieu=(fin+deb)/2;
            tri_fusion_bis(tableau,deb,milieu);
            printf("array works in progress \n");
            affichage(fin,tableau);
             printf("array 2  works in progress \n");
            affichage(deb,tableau);
            tri_fusion_bis(tableau,milieu+1,fin);

            fusion(tableau,deb,milieu,fin);

            }
        }

void tri_fusion(int sizeT,int *tableau)
     {
     if (sizeT>0)
            {
            tri_fusion_bis(tableau,0,sizeT-1);

            }
     }
