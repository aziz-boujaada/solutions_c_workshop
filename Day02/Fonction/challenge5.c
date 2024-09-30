#include <stdio.h>
#include <stdlib.h>
void Factoriel(int n)
{
    int f = 1;

    for (int i = 1; i <= n; i++)
    {

        f *= i;
        
    }
    printf("la facturiel de n est %d",f);
   
}
int main()
{
    int n;
    printf("entrer N :");
    scanf("%d", &n);
    Factoriel(n);
    
}