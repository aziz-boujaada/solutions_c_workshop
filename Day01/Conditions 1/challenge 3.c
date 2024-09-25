#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    
int a , b , somme ; 

printf("entrer la 1er valure :");
scanf("%d" , &a);

printf("entrer la 2éme valure :");
scanf("%d" , &b);

somme=a+b ; 

 if (a==b){
     printf("la somme est : %d" , somme*3);
 }
 
  else {
     printf("la somme est : %d" , somme);
 }
 

    return 0;
}