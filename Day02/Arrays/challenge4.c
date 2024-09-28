
#include <stdio.h>

int main() {
    int i,b,a=0,d;
    
    printf("le nombre element:");
        scanf("%d",&b);
        int T[b];
       //max 
    for(i=0;i<b;i++){
        printf("element %d:",i+1);
        scanf("%d",&T[i]);
        
        d=T[i];
        if(a<d){
        a=d;
        }
    }
    
   
    printf("max nombre est :%d",a);
    
    return 0;
}