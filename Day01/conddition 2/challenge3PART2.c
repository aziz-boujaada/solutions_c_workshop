#include <stdio.h>

int main()
{

    int nmbr_total_J_A, nmbr_jour_U, statu, temp_plien, Temps_partiel, Jours_restants;

    printf("entrer Nombre total de jours de congés accordés :");
    scanf("%d", &nmbr_total_J_A);

    printf("entrer Nombre de jours de congés utilisés :");
    scanf("%d", &nmbr_jour_U);

    printf(" choiser Statut de l'employé\n");
    printf("0 : pour temps plein\n ");
    printf("1 : Temps partiel\n");

    printf(" entrer votre Statut de l'employé: ");
    scanf("%d", &statu);

    switch (statu)
    {
    case 0:
        printf("Jours restants est:%d ", Jours_restants = (nmbr_total_J_A / 2) - nmbr_jour_U);
        break;

    case 1:
        printf("Jours restants est:%d ", Jours_restants = nmbr_total_J_A - nmbr_jour_U);
        break;
    }

    return 0;
}