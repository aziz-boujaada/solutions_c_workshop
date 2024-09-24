#include <stdio.h>

int main() {
   
   
   float a ;
   float b  ;
   float c  ;
   float d  ;
 
   float  moyenne_pondérée;
   
   printf("la premier nombre :");
   scanf("%f" , &a);
    
    printf("la deuxiem nombre :");
   scanf("%f" , &b);
   
   
   printf("la troiseme nombre :");
   scanf("%f" , &c);
   
  moyenne_pondérée = ( (a*2)+(b*3)+(c*5))/10;
  printf(" la moyenne pondérée de trois nombres est =%f" , moyenne_pondérée);
    return 0;
}