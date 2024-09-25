#include <stdio.h>

int main() {
   int montion ; 

printf("entrer votre Note :"); 
scanf("%d" , &montion ); 

if (montion < 10){
    printf("recalé");
}

else if (montion >= 10 && montion <12){
    printf("passable");
}

else if (montion >= 12 && montion <14){
    printf("assez bien ");
}

else if (montion >= 14 && montion <16){
    printf(" bien ");
}

else if (montion >=16){
    printf(" tres bien ");
}

 return 0;   
}