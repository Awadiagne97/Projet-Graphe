#include <stdio.h>
#include <stdlib.h>
# include <string.h>
//#define distance_max=100;


char noms [200][150];
// Tableau de lattitude
char lat [200][150];
// tableau de longitudes
char longi [200][150];

//int lat[200];
//int long[200];
void noms_func(char *filename){
            FILE* fichier = fopen(filename, "r+");
            char texte[4000] = "";
            char c;int i=0;int k=0;int j=0;int x=0;
            char s;
            if (fichier != NULL)
            {
                printf("Les donnees lues sont les suivantes \n");

                 do

                    {

                                    c = fgetc(fichier); // On lit le caractère
                                    if (c ==';') {i++;continue;}
                                    if(c=='\n') i=k=j=0,x++;
                                    if( i==1) {noms[x][j++]=c;}
                                  //   if(c=='"') while(fgetc(fichier)!='"');//quand on tombe sur un guillemet lire tous les caracteres jusquau guillemet suivant.
                    } while (c!= EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)


        }

                else {
                    // On affiche un message d'erreur si on veut
                    printf("Impossible d'ouvrir le fichier test.txt");
                }
}


void lati_func(char *filename){
            FILE* fichier = fopen(filename, "r+");
            char texte[4000] = "";
            char c;int i=0;int k=0;int j=0;int x=0;
            char s;
            if (fichier != NULL)
            {
                printf("Les donnees lues sont les suivantes \n");

                 do

                    {

                                    c = fgetc(fichier); // On lit le caractère
                                    if (c ==';') {i++;continue;}
                                    if(c=='\n') i=k=j=0,x++;
                                    if( i==2) {lat[x][j++]=c;}
                                  //   if(c=='"') while(fgetc(fichier)!='"');//quand on tombe sur un guillemet lire tous les caracteres jusquau guillemet suivant.
                    } while (c!= EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)


        }

                else {
                    // On affiche un message d'erreur si on veut
                    printf("Impossible d'ouvrir le fichier test.txt");
                }
}

void longi_func(char *filename){
            FILE* fichier = fopen(filename, "r+");
            char texte[4000] = "";
            char c;int i=0;int k=0;int j=0;int x=0;
            char s;
            if (fichier != NULL)
            {
                printf("Les donnees lues sont les suivantes \n");

                 do

                    {

                                    c = fgetc(fichier); // On lit le caractère
                                    if (c ==';') {i++;continue;}
                                    if(c=='\n') i=k=j=0,x++;
                                    if( i==3) {longi[x][j++]=c;}
                                  //   if(c=='"') while(fgetc(fichier)!='"');//quand on tombe sur un guillemet lire tous les caracteres jusquau guillemet suivant.
                    } while (c!= EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)


        }

                else {
                    // On affiche un message d'erreur si on veut
                    printf("Impossible d'ouvrir le fichier test.txt");
                }
}





int main()
{
    printf("Hello world!\n");
    char file[] = "musees2.csv";
 //  read_donnees_file(file);
   noms_func(file);
   lati_func(file);
   longi_func(file);



  for(int i=1;i<86;i++){
    printf("%s \n",noms[i]);
  //  printf("%s \n",longtudes[i]);


   }
     for(int j=1;j<86;j++){
 printf("%s \n",lat[j]);
  //  printf("%s \n",longtudes[i]);


   }
   for(int k=1;k<86;k++){
 printf("%s \n",longi[k]);
  //  printf("%s \n",longtudes[i]);


   }
    return 0;
}
