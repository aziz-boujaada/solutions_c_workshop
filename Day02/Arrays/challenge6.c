#include <stdio.h>

int main() {
    int i,b,a=0,j,n;
    
    printf("le nombre d'éléments:");
        scanf("%d",&b);
        int T[b];
        
        printf("le facteur de multiplication:");
        scanf("%d",&n);
        
    for(i=0;i<b;i++){
        printf("léléments %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    for(j=0;j<b;j++){
        
        n*T[j];
        
        a+=T[j];
        
    }
    printf("%d",a);
    
    return 0;
}
#include <stdio.h>

int main() {
    int i,b,a=0,j,n;
    
    printf("le nombre d'éléments:");
        scanf("%d",&b);
        int T[b];
        
        printf("le facteur de multiplication:");
        scanf("%d",&n);
        
    for(i=0;i<b;i++){
        printf("léléments %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    for(j=0;j<b;j++){
        
        T[j]=n*T[j];
        
       printf("%d\n",T[j]);
        
    }
    
    
    return 0;
}
