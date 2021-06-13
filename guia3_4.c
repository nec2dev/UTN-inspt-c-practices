/*4. Se lee un entero N y luego N numero real. 
Se emite el menor de ellos.*/

#include <stdio.h>

int main() {

   float f;
   int i;

	printf("Introduzca un primer numero que sea entero: ");
	scanf("%i", &i);
	printf("Introduzca un segundo numero real: ");
	scanf("%f", &f);

    if(i<f){
    printf("el numero menor es: %i", i);
    }
    else {
        printf("el numero menor es: %.2f", f);
    }
    return 0;
};