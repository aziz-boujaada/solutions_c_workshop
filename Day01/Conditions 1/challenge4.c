#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float a,b,c,D,x1,x2;

    printf("entrer les facteurs de l\'equation a = ");
    scanf("%f", &a);

    printf("\nb=");
    scanf("%f", &b);

    printf("\nc=");
    scanf("%f", &c);

    D = (b*b) - (4 * a * c);

    if(D > 0) {

        x1 = (-b - sqrt(D)) / (2 * a); 
        x2 = (-b + sqrt(D)) / (2 * a);
        printf("x1 = %f\nx2 = %f", x1,x2);
    } else if (D == 0){
        x1 = (-b) / (2 * a);
        printf("x = %f", x1);
    } else {
        printf("NO SOLOUTION");
    }


    return 0;
}
