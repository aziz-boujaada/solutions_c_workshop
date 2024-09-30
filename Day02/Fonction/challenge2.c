#include <stdio.h>
#include <stdlib.h>

void multiplication(int x , int y){

  
    int  res = x*y;
    printf("reslut de x*y = %d", res);
}

int main(){
int x , y;
    printf(" entree  vlauer de X :",x);
    scanf("%d",&x);
    printf(" entree  vlauer de Y :",y);
    scanf("%d",&y);
    multiplication(x,y);
}