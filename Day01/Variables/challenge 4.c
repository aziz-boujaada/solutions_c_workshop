   #include <stdio.h>

int main() {
    // Write C code here
    float kph;
    float mps;

    printf ("entree li vitesse on km/h : ");
    scanf ("%f",&kph);


    mps = kph * 0.27778;
    printf ("%f\n",mps);

    return 0;
}