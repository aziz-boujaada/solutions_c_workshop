#include <stdio.h>
//nombre pair
int main() {
    
    int n , i ,j=0;
    printf("Entrer N : "); 
    scanf("%d" , &n); 
    
    for(i=1 ; i<=n ; i++){
        j=j+2;
        printf(" %d " , j);
    }

    return 0;
}