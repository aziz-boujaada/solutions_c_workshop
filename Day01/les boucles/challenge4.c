
#include <stdio.h>
// nombre impair
int main()
{

    int n, i, j = 1;
    printf("Entrer N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        j = j + 2;
        printf(" %d ", j);
    }

    return 0;
}