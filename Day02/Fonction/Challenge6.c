#include <stdio.h>
void Fibonacci(){
       int n_1 = 1,n_2 = 0;
    int nbr;
    int result;

    printf("donne moi un Nobre :");
    scanf("%d", &nbr);

    int F[100];

    for(int i=2;i<=nbr;i++){

        F[i] = n_1 + n_2;
        n_2 = n_1;
        n_1 = F[i];
        result = F[i];
    }

    printf("%d", result);
}

int main(){

   Fibonacci();
}