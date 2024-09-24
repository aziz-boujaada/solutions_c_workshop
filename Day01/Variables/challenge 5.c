#include <stdio.h>

int main() {
    //challenge 5
  float c ;
  
  printf("entrer la température en Celsius :");
  scanf("%f" , &c);
  
   if  (c < 0 ){
      printf("solid") ; 
   }
   
    else if  (c >=0 && c<100){
      printf("Liquide");
   }
   
     else { 
      printf("Gaz");
   }

    return 0;
}
