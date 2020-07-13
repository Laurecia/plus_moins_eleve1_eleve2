#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plus_moins ( int value )
{
    int choix_joueur;
    printf("%d",value);

    do
    {
       
        printf("Quel est le nombre ?\n ");
        scanf("%d", &choix_joueur);

        if (value > choix_joueur)
	{
	    printf("c'est plus !\n");
            printf("le nombre entre n'est pas correct \n");
	    scanf("%d", &choix_joueur);
	}   
        else if (value < choix_joueur)
	{
            printf("C'est moins !\n");
	    printf("le nombre entre n'est pas correct \n");
	    scanf("%d", &choix_joueur);

	}    
        else
            printf ("Bingo !\n");
    } while (choix_joueur != value);

}

int main()
{

	int valeur_trouver = 0, choix_joueur = 0;
        const int Max = 100, Min = 1;

        srand(time(NULL));
        valeur_trouver = (rand() % (Max - Min + 1)) + Min;
	return plus_moins(valeur_trouver);

}

 
 
 
