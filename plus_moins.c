#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 0, nombreEntre = 0;
    int compteurDeCoups = 0;
    int continuerPartie = 1;
    int modedeJeu = 0;
    int niveauDeDifficulte = 0;
    int finDuJeu;
    int max = 100, min = 1;


    srand(time(NULL));

    while(continuerPartie!=0)
    {
        finDuJeu = 1;
        printf("===choix joueur===\n");
        printf("1.jouer a 2\n");
       	printf("2.solo\n");
        scanf("%d", &modedeJeu);
	
        printf("===Niveau De Difficulte===\n");
        printf("1.Niveau facile:Entre 1 et 100\n");
        printf("2.Niveau moyen:Entre 1 et 1000\n");
	printf("1.Niveau difficile:Entre 1 et 10000\n");
        printf("Votre choix : ");
        scanf("%d", &niveauDeDifficulte);

        printf("\n");

        switch(niveauDeDifficulte)
        {
            case 1 : max = 100;break;
            case 2 : max = 1000;break;
            case 3 : max = 10000;break;
            default : printf("erreur du Niveau de difficulte , veuillez choisir 1 ou 2 ou 3!\n");break;
        }

        if(niveauDeDifficulte==1 || niveauDeDifficulte == 2 || niveauDeDifficulte == 3)
        {
            nombreMystere = (rand() % (max - min + 1)) + min;

            switch(modedeJeu)
            {
                case 1 /*vs 1 joueur*/ :
                            do
                            {
                                compteurDeCoups++;
                                printf("Quel est le nombre a trouver ? ");
                                scanf("%d", &nombreEntre);

                                // comparaison

                                if (nombreMystere > nombreEntre)
                                    printf("C'est plus !\n\n");
                                else if (nombreMystere < nombreEntre)
                                    printf("C'est moins !\n\n");
                                else
                                    printf ("Bingo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);

                            } while (nombreEntre != nombreMystere);break;
                case 2 /*vs 2 joueur*/ :
                    do
                    {
                      
                        compteurDeCoups++;
                        if(finDuJeu!=0)
                        {

                            printf("Joueur 1 : Quel est le nombre ? ");
                            scanf("%d", &nombreEntre);

                            if (nombreMystere > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombreMystere < nombreEntre)
                                printf("C'est moins !\n\n");
                            else
                            {
                                printf ("Bingo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);
                                finDuJeu = 0;
                            }
                        }
                        if(finDuJeu!=0)
                        {

                            printf("Joueur 2 : Quel est le nombre ? ");
                            scanf("%d", &nombreEntre);

                            // On compare le nombre entré avec le nombre mystère

                            if (nombreMystere > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombreMystere < nombreEntre)
                                printf("C'est moins !\n\n");
                            else
                            {
                                printf ("Bingo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);
                            }
                        }

                    } while (nombreEntre != nombreMystere);break;
                default : printf("erreur!!, veuillez choisir 1 ou 2!\n");
            }
        }



         printf("Voulez vous continuer la partie ?\n\n");
         printf("Tapez 1 pour OUI ou 0 pour NON: ");
         scanf("%d", &continuerPartie);
         printf("\n\n");

    }

    printf("\t===Fin du Jeu===\n");

    return 0;
}


