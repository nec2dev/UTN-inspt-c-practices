/*4.Siendo "y" una variable int y "x" una variable float, 
indica si son correctas las sentencias:*/
#include <stdio.h>

int main() {

    int y = 1;
    float x = 1.0;

    //printf(x = .25 + y);
    //printf("%i", x);
    
    y = 0.25 + x;
    printf("%i", y);

    //printf(y = 0,25 + x);
    //printf("%i", y);

    return 0;
};