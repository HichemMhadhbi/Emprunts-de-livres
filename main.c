#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbLivres, nbJours;
    printf("Veuillez saisir le nombre de livres : ");
    scanf("%d", &nbLivres);

    printf("Veuillez saisir le nombre de jours : ");
    scanf("%d", &nbJours);

    int LivreDispo[1000] = {0};

    for(int iJour = 0 ; iJour < nbJours ; iJour++){
        int nbClients;

        printf("Veuillez saisir le nombre de clients pour ce jour : ");
        scanf("%d", &nbClients);

        for(int iClient = 0 ; iClient < nbClients ; iClient++){
            int indiceLivre, duree;

            printf("Veuillez saisir l'indice du livre : ");
            scanf("%d", &indiceLivre);

            printf("Veuillez saisir la duree souhaitee : ");
            scanf("%d", &duree);

            if (iJour >= LivreDispo[indiceLivre]){
                printf("1\n"); // Le livre peut etre emprunté
                LivreDispo[indiceLivre] = iJour + duree;
            }
            else{
                printf("0\n"); // Le livre n'est pas disponible
            }
        }
    }

    return 0;
}
