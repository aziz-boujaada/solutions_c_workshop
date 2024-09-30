#include<stdio.h>
#include <stdlib.h>
void calculSum(int a,int b){
    
    int sum= a+b;
    printf("la somme de a+b = %d",sum);
}

int main(){
    int a,b;
    printf(" entree  vlauer de A :",a);
    scanf("%d",&a);
    printf(" entree  vlauer de B :",b);
    scanf("%d",&b);
    calculSum(a,b);
}