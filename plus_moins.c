#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Créer une fonction plus_moins qui prend en entrée un int choix_joueur et un int valeur_a_trouver
int main ( int argc, char** argv )
{
    int valeur_trouver = 0, choix_joueur = 0;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    valeur_trouver = (rand() % (MAX - MIN + 1)) + MIN;


    do
    {
       
        printf("Quel est le nombre ? ");
        scanf("%d", &choix_joueur);

        if (valeur_trouver > choix_joueur)
            printf("C'est plus !\n\n");
        else if (valeur_trouver < choix_joueur)
            printf("C'est moins !\n\n");
        else
            printf ("Bingo !\n\n");
    } while (choix_joueur != valeur_trouver);

}
 
 
 
