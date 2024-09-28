#include <stdio.h>
//puissance
int main() {
    
    int base , exposant ,i, j=1  ;
    printf("Entrer base : "); 
    scanf("%d" , &base); 
    printf("Entrer exposant : "); 
    scanf("%d" , &exposant);
    
    for(i=0 ; i<exposant ; i++){
         j=j*base;
            
    }
    
    printf("%d\n", j); 
  
    

    return 0;
}