#include <stdio.h>

int main() {
    
char caracter ; 

 printf(" entrer un carcater : "); 
 scanf("%c" , &caracter); 
 
 if ( caracter >= 'A' && 'Z'){
     printf("c'est caracter\n");
 }
 
  else if ( caracter >= 'a' && 'z'){
     printf("c'est caracter\n");
 }
  else{
    printf("ERROR!  ");
}

if(caracter >=65 && caracter<=90){
    printf("caracter majiscule  ");
}

else  {
    printf("caracter miniscule  ");
}
 
 

 return 0;   
}