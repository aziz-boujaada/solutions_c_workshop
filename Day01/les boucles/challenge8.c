
#include <stdio.h>

int main() {
    
    int i , f_0, f_1, f_n, n;
    
    f_0 = 0;
    f_1 = 1;
    
    printf("Enter : ");
    scanf("%d", &n);
    if(n == 0){
        printf("f_n : %d ", f_0);
    }else if(n == 1){
        printf("f_n : %d ", f_1);
    }  
    
    for(i=2; i <= n ;i++){
        f_n = f_0 + f_1;
        f_0 = f_1;
        f_1 = f_n;
        
        
    }
    
    printf("f_n : %d ", f_n);

    return 0;
}