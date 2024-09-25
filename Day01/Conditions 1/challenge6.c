#include <stdbool.h>
#include <stdio.h>

int main() {
    
int nombre ; 

 printf( "entrer une nombre : ");
 scanf( "%d " , &nombre ); 
 
 if (nombre >0 ){
     printf("votre nombre positif"); 
 }
 
  else if (nombre < 0 ){
     printf("votre nombre negative"); 
 }
 
   else if(nombre == 0) {
     printf("null"); 
 }
 
  else {
     printf("NO RESULT!"); 
 }

    return 0;
}