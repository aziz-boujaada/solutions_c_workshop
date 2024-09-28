#include <stdio.h>
//tabe multiplication
int main() {
   int i , n; 
   
   printf("entrer une nombre : " ); 
   scanf("%d" , &n ); 
   
   for( i=1 ; i<=10 ; i++){
       printf("\n%d x %d = %d", n,i,n*i);
   }

   

    return 0;
}