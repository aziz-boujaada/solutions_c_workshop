// challaeng 9
#include <stdio.h>
#include <math.h>


int main() {

   float x1 , x2 ; 
   float y1 , y2 ; 
   float z1 , z2 ; 
   
   float distance ; 
    
    printf("la valure de X1 :"); 
    scanf("%f" , &x1);
    printf("la valure de X2 :"); 
    scanf("%f" , &x2);
    
    printf("la valure de Y1 :"); 
    scanf("%f" , &y1);
    printf("la valure de Y2 :"); 
    scanf("%f" , &y2);
    
     printf("la valure de Z1 :"); 
    scanf("%f" , &z1);
    printf("la valure de Z2 :"); 
    scanf("%f" , &z2);
    
distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));

    printf("%f" , distance);
    

    return 0;
}