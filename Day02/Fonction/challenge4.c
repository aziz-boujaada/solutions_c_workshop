#include<stdio.h>
#include<stdlib.h>

void Maximun(int a ,int b){
     if(a<b){
        printf("le minimun  valeure est %d" ,a);

     }
     else if (a>b){
        printf("le minimun  valeure est %d" ,b);

     }
}

int main(){
    int a, b; 
    printf("entrer la valaure de A ");
    scanf("%d", &a);
    printf("entrer la valaure de b ");
    scanf("%d", &b);
    Maximun(a ,b);
}