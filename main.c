#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

int main()
{

    /*
    entier: long, larg, i, j

    d�but
    lire long
    lire larg
    pour i allant de 0 � long-1 faire
        pour j allant de 0 � larg-1 faire
        si (i=0 ou i=long-1 ou j=0 ou j=larg-1) alors �crire "#" sinon �crire "*"
        fin pour
    nouvelle ligne
    fin pour

    fin
    */

    int longueur = 0;  //Les deux int que l'utilisateur va pouvoir manipuler
    int largeur = 0;
    int i=0;  //Les deux int n�cessaires pour les boucles
    int j=0;

    printf("Entrez la longueur\n");
    scanf("%i",&longueur);          //L'utilisateur entre les deux valeurs qu'il souhaite utiliser pour son carr�
    printf("Entrez la largeur\n");
    scanf("%i",&largeur);

    for(i=0;i<longueur;i++){
            for(j=0;j<longueur;j++){
                    if(i==0 || i==longueur-1 || j==0 || j==largeur-1){
                        printf("#");
                    } else {        //L'ordinateur cr��e le carr� selon les valeurs rentr�es
                        printf("*");
                    }
            }
            printf("\n");
    }

}
