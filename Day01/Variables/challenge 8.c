// challaeng 8
#include <stdio.h>
#include <math.h>


int main() {
   
   
   float a ;
   float b  ;
   float c  ;
  
 
   float Moyennegéométrique ;
   
   printf("la premier nombre :");
   scanf("%f" , &a);
    
    printf("la deuxiem nombre :");
   scanf("%f" , &b);
   
   
   printf("la troiseme nombre :");
   scanf("%f" , &c);
   
    Moyennegéométrique = pow(a * b * c, (1.0/3.0));

  printf(" la moyenne pondérée de trois nombres est =%2.f" , Moyennegéométrique);
    return 0;
}