/*	Se leen 20 números y se emite su promedio.*/


#include <stdio.h>

int main() {

   int i;
   float num, suma, promedio;

    for ( i=1 ; i<21 ; i++ ){
        printf( "\nIntroduzca un n%cmero %i: ", 163, i);
        scanf("%f", &num );
            suma += num;
        }

        promedio = suma/20;

    printf("\nEl promedio de los 20 n%cmero(s) ingresados es de: %.2f.", 163, promedio);

    return 0;

};