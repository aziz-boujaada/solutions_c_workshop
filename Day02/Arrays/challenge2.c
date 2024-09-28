
#include <stdio.h>

int main() {
    int i,b;
    // entrer et afficher
    printf("nombre des elementb :");
        scanf("%d",&b);
        int T[b];
        
    for(i=0;i<b;i++){
        printf("element %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    for(i=0;i<b;i++){
        printf("%d\n",T[i]);
    }
    
    
    return 0;
}