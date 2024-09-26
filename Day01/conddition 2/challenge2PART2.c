#include <stdio.h>

int main() {
   
    int age,voiteur,accident, prime_base;
    float prime,f,offre;
     prime_base=3000;
    
    printf("Âge du conducteur (en années) :");
    scanf("%d",&age);
    
    printf("\n1 pour sportive \n2 pour utilitaire \n3 pour familiale \nType de voiture:");
    scanf("%d",&voiteur);
    
    printf("Nombre d'accidents au cours des 5 dernières années :");
    scanf("%d",&accident);
    
    if(age<25){
        prime=prime_base*1.5;
    }else if(age>=25 && age<65){
        prime=prime_base;
    }else{
        prime=prime_base*1.2;
    }
    
    switch(voiteur){
        
        case 1:
              f=prime*2;
              break;
        case 2:
              f=prime*1.2;
              break;
        case 3:
              f=prime*1.1;
              break;
        default:
               printf("Type de voiture faux");
    }
    
    if(accident>1){
        offre=prime+prime*0.3;
        printf("Prime d'Assurance Auto : %.2f",offre);
        
    }else {
        printf("Prime d'Assurance Auto  : %.2f",prime);
    }
        
    
    
    
    

    return 0;
}