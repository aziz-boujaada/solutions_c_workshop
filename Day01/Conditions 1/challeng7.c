#include <stdbool.h>
#include <stdio.h>

int main() {
    
char caracter ; 
printf("entrer une caracter: "); 
scanf("%c" , &caracter); 

if(caracter >=65 && caracter<=90){
    printf("caracter majiscule  ");
}
else {
    printf("caracter miniscule  ");
}
    return 0;
}