#include <stdbool.h>
#include <stdio.h>

int main() {
    
    int year , choice ; 
    int months , days , hours , minutes , second ; 
    
    
    months = year*12 ; 
    days = year*365 ; 
    hours = year*365*24 ; 
    minutes = year*365*24*60;
    second = year*365*24*3600;
    printf("Year : "  );
    scanf("%d", &year); 
    
    printf("\nlist of choises :"); 
    
    
    printf("\n1: convarte to months ");
    printf("\n2: convarte to days  ");
    printf("\n3: convarte to hours ");
    printf("\n4: convarte to minutes ");
    printf("\n5: convarte to second  ");
    
    printf("\nenter your choice here : ");
    scanf("%d" , &choice ); 
    
    
    switch (choice){
        case 1: printf("convart to months %d", year*12);
        break;
        
         case 2: printf("convart to days %d",  year*365);
        break;
        
        case 3: printf("convart to hours %d",  year*365*60);
        break;
        
        case 4: printf("convart to minutes %d",  year*365*24*60);
        break;
        
        case 5: printf("convart to minutes %d",year*365*24*3600);
        break;
    }
    return 0;
}