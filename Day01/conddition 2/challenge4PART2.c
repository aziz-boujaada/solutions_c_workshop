#include <stdio.h>

int main()
{

    int Score, Anciennete ;
    float Recompenses;

    printf("Donner Score de performance entr 0 et 100 :   ");
    scanf("%d", &Score);

    printf(" entrer Ancienneté (En Annee) :");
    scanf("%d", &Anciennete);

    printf("Récompenses reçues\n 0:pour aucune\n 1:pour une\n  2: pour deux ou plus");
    scanf("%f", &Recompenses);

    if (Score >= 90 && Anciennete >= 5)
    {
        printf("Exellent");
    }

    else if (Score >= 75 && Anciennete < 3)
    {
        printf("Bonne");
    }

    else if (Score >= 50 && Anciennete < 3)
    {
        printf("Satisfaisante");
    }

    else if (Score < 50)
    {
        printf("Insuffisante");
    }

    if (Recompenses == 1)
    {
        printf("le Recompenses est %f", Recompenses * 0.1);
    }

    if (Recompenses >= 2)
    {
        printf("le Recompenses est %f", Recompenses * 0.3);
    }
}