// This program reads two lowercase alphabet characters from the user.
// It calculates and prints the sum of their alphabetical positions.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a,b;
    scanf("%c %c",&a,&b);
    printf("%d",a+b-192);
    return 0;
}
