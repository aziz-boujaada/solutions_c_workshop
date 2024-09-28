#include <stdio.h>
//Factoulier
int main() {
   int n , i , f=1 ; 
   printf("entrer N :"); 
   scanf("%d" , &n); 
   
   for( i=1 ; i<=n ; i++){
       
     f = f*i;
      
   }
printf("%d" ,f);

    return 0;
}