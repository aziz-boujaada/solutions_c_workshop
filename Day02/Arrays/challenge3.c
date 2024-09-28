
#include <stdio.h>

int main() {
    int i,b,a=0,j;
    
    printf("nombre element:");
        scanf("%d",&b);
        int T[b];
        
    for(i=0;i<b;i++){
        printf("element %d:",i+1);
        scanf("%d",&T[i]);
    }
    //somme
    for(j=0;j<b;j++){
        
        a+=T[j];
       
        
    }
    printf("la somme des element est : %d",a);
    
    return 0;
}