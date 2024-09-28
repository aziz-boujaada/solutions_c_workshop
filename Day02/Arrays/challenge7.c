#include <stdio.h>

int main() {
    int i,b,a,c,j;
    
    printf("le nombre d'éléments:");
        scanf("%d",&b);
        int T[b];
        
    for(i=0;i<b;i++){
        printf("lé léments %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    for(i=0;i<b;i++){
              for(j=0;j<b-1-i;j++){
                  if(T[j]>T[j+1]){
                      T[j]= T[j]+T[j+1];
                      T[j+1]=T[j]-T[j+1];
                      T[j]= T[j]-T[j+1];
                  }
              }
    }
   
    for(i=0;i<b;i++){
        printf("\n %d",T[i]);
    }
   

    
    return 0;
}