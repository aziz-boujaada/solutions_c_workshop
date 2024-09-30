#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "variables.h"
#include "header.h"


void Ajouter()
{
    system("cls");
    int ajout;
    printf("antrer Nombre de livres a ajouter : ");
    scanf("%d", &ajout);

    printf("====================== Ajouter =====================\n");

    for (int i = nbrTotale; i < nbrTotale + ajout; i++)
    {
        printf("Titre : ");
        scanf(" %[^\n]", titre[i]);
        printf("Auteur : ");
        scanf(" %[^\n]", auteur[i]);
        printf("Prix : ");
        scanf("%f", &prix[i]);
        printf("Quantite : ");
        scanf("%d", &quantite[i]);
        printf("\n");
    }
    nbrTotale += ajout;
}

void Affichage()
{
    system("cls");
    if (nbrTotale == 0)
    {
        printf("pas de livres dans Stock");
    }
    else
    {
        printf("===================== Afficher Le Stock ======================\n");
        for (int i = 0; i < nbrTotale; i++)
        {
            printf("Titre : %s\n", titre[i]);
            printf("Auteur : %s\n", auteur[i]);
            printf("Prix : %.2f\n", prix[i]);
            printf("Quantite : %d\n", quantite[i]);
            printf("\n");
        }
    }
}

void Chercher()
{
    system("cls");
    char chercher[100];
    int found = 0;
    printf("===================== Chercher Un Livre ======================\n");
    printf("Titre : ");
    scanf(" %[^\n]", chercher);

    for (int i = 0; i < nbrTotale; i++)
    {
        if (strcmp(titre[i], chercher) == 0)
        {
            system("cls");
            printf("---------- Livre est Trouve ----------\n");
            printf("Titre : %s\n", titre[i]);
            printf("Auteur : %s\n", auteur[i]);
            printf("Prix : %.2f\n", prix[i]);
            printf("Quantite : %d\n", quantite[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Livre pas Trouve");
}

void Modification()
{
    system("cls");
    char chercher[100];
    int found = 0;
    printf("===================== Chercher Un Livre ======================\n");
    printf("Titre : ");
    scanf(" %[^\n]", chercher);

    for (int i = 0; i < nbrTotale; i++)
    {
        if (strcmp(titre[i], chercher) == 0)
        {
            system("cls");
            printf("---------- Livre est Trouve ----------\n");
            printf("Titre : %s\n", titre[i]);
            printf("Auteur : %s\n", auteur[i]);
            printf("Prix : %.2f\n", prix[i]);
            printf("Quantite : %d\n", quantite[i]);
            found = 1;
            printf("===================== Modification ======================\n");
            int mod;
            printf("Donne Moi la Nouvelle Quantite :");
            scanf("%d", &mod);

            quantite[i] = mod;
        }
    }

    if (!found)
        printf("Livre pas Trouve");
}

void Suppimer()
{
    system("cls");
    char chercher[100];
    int found = 0;
    printf("===================== Suppremer ======================\n");
    printf("Titre : ");
    scanf(" %[^\n]", chercher);

    for (int i = 0; i < nbrTotale; i++)
    {
        if (strcmp(titre[i], chercher) == 0)
        {
            found = 1;

            for (int j = 0; j < nbrTotale - 1; j++)
            {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
                printf("Livre a ete Supprimer");
            }
        }
    }
    nbrTotale--;

    if (!found)
        printf("Livre pas Trouve");
}

void LIVREtotal()
{
    system("cls");
    printf("Le Nombre Totale des Livres est : %d", nbrTotale);
}

