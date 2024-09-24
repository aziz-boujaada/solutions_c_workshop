// challaeng 10
#include <stdio.h>
#include <math.h>

int main() {

   float rayon ; 
   float volume ; 
   const float p= 3.14 ; 
   
   printf("entrer la valure de rayon :");
   scanf("%f" , &rayon );
   
   volume = (4/3) * p * pow(rayon ,3);
   printf("%f" , volume);
   
 
    

    return 0;
}