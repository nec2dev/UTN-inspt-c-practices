/*	Se lee un entero N y luego N numero reales. Se emite el menor de ellos.
	Se leen N números; se emite su promedio.
	Se lee un número natural N y la computadora emite los números naturales pares menores que N.  
	Dados N enteros, se emite un mensaje indicando si ingresaron en orden creciente, decreciente o desordenados.
    Se lee un número entero N mayor o igual que 0 y, la computadora muestra el factorial del mismo.*/

#include <stdio.h>

int main() {

   int i, longarray;
   float num, menor;

   printf("Introduzca la cantidad de n%cmeros a ingresar: ", 163);
	scanf("%i", &longarray);

    for ( i=1 ; i<=longarray ; i++ ){
        printf( "\nIntroduzca el %i° n%cmero : ", i, 163);
        scanf("%f", &num);
            if (num < menor)
              menor=num;
        };
        printf("El número menor es: %.3f\n", menor);
    return 0;
};