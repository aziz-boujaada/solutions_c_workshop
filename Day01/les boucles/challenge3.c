#include <stdio.h>
// somme des nombre
int main()
{
    int n, i, f = 0;
    printf("entrer N :");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {

        f = f + i;
    }
    printf("%d", f);

    return 0;
}