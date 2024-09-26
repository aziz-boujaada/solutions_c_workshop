#include <stdio.h>
int main()
{

    int destination, nmbr_personne;
    float budget;
    printf(" Entrer budget (en eurousb):");
    scanf("%f", &budget);

    printf(" destination\n 1:pour plage\n 2: pour montagne\n 3:pour ville  ");
    scanf("%d", &destination);

    printf("Nombre de perssone :");
    scanf("%d", &nmbr_personne);
}