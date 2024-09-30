#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char T[100][10];
 int nbr_char=0;
void inversCHAR(){

   printf("Entrer un chaine caracter ici:");
        scanf("%s" , &T);
     

     for(int i=0 ; i<nbr_char ; i++){

     strcpy(T[i], T[i = 3]);
     strcpy(T[i], T[i + 2]);
     strcpy(T[i], T[i = 1]);
     strcpy(T[i], T[i + 0]);
        
     }
}

int main(){
   inversCHAR();
}
