#include <stdio.h>

int main()
{

    int H, H1, M, M1, S, S1;
    printf("Le premier instant (HH:MM:SS) ");
    scanf("%d:%d:%d", &H, &M, &S);

    printf("Le deuxieme instant (HH:MM:SS) ");
    scanf("%d:%d:%d", &H1, &M1, &S1);

    if (H < H1)
    {
        printf("Le premier instant vient avant le deuxième");
    }
    else if (H == H1)
    {
        if (M < M1)
        {
            printf("Le premier instant vient avant le deuxième");
        }
        else if (M == M1)
        {
            if (S < S1)
            {
                printf("Le premier instant vient avant le deuxième");
            }
            else if (S == S1)
            {
                printf("Il s'agit du même instant");
            }
            else
            {
                printf("Ledeuxième  instant vient avant le premier");
            }
        }
        else
        {
            printf("Ledeuxième  instant vient avant le premier");
        }
    }
    else
    {
        printf("Ledeuxième  instant vient avant le premier");
    }

    return 0;
}