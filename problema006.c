/*	Se lee un entero N y luego N numero real. 
Se emite el menor de ellos.*/

#include <stdio.h>

int main() {

   int i, longarray;
   float num, menor=1;

    printf("Introduzca la cantidad de n%cmeros a ingresar: ", 163);
	scanf("%i", &longarray);

    for ( i=1 ; i<=longarray ; i++ ){
        printf( "\nIntroduzca el %i%c n%cmero : ", i, 248, 163);
        scanf("%f", &num);
            if (num < menor)
              menor=num;
        };
        printf("El número menor es: %.3f\n", menor);
    return 0;
};