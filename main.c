#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

int main()
{
    int longueur = 0;
    int largeur = 0;
    int i=0;
    int j=0;

    printf("Entrez la longueur\n");
    scanf("%i",&longueur);
    printf("Entrez la largeur\n");
    scanf("%i",&largeur);

    for(i=0;i<longueur;i++){
            for(j=0;j<longueur;j++){
                    if(i==0 || i==longueur-1 || j==0 || j==largeur-1){
                        printf("#");
                    } else {
                        printf("*");
                    }
            }
            printf("\n");
    }

}
