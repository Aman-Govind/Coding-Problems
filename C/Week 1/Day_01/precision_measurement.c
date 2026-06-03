// This program reads a floating-point number from the user.
// It multiplies the number by π (pi) and prints the result up to 10 decimal places.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float D;
    scanf("%f",&D);
    double pi =3.141592653589793238;
    double result= D*pi;
    printf("%.10f",result);
    return 0;
}
