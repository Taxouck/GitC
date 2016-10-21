#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

int main()
{

    /*
    entier: long, larg, i, j

    début
    lire long
    lire larg
    pour i allant de 0 à long-1 faire
        pour j allant de 0 à larg-1 faire
        si (i=0 ou i=long-1 ou j=0 ou j=larg-1) alors écrire "#" sinon écrire "*"
        fin pour
    nouvelle ligne
    fin pour

    fin
    */

    int longueur = 0;  //Les deux int que l'utilisateur va pouvoir manipuler
    int largeur = 0;
    int i=0;  //Les deux int nécessaires pour les boucles
    int j=0;

    printf("Entrez la longueur\n");
    scanf("%i",&longueur);          //L'utilisateur entre les deux valeurs qu'il souhaite utiliser pour son carré
    printf("Entrez la largeur\n");
    scanf("%i",&largeur);

    for(i=0;i<longueur;i++){
            for(j=0;j<longueur;j++){
                    if(i==0 || i==longueur-1 || j==0 || j==largeur-1){
                        printf("#");
                    } else {        //L'ordinateur créée le carré selon les valeurs rentrées
                        printf("*");
                    }
            }
            printf("\n");
    }

}
