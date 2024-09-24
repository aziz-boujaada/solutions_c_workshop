#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    
    int num,resulta;
    int num1,num2,num3,num4;
    
    printf("entrer un nombre de 4 chiffres :");
    scanf("%d", &num);

num1 = num / 1000;
num2 = (num / 100) % 10;
num3 = (num / 10) % 10;
num4 = num % 10; 

resulta  = num4 * 1000 + num3 * 100 + num2 * 10 + num1; 
printf("Nombre inverse est : %d ", resulta);


    return 0;
}