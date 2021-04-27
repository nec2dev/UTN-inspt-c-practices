/*Desarrolla un algoritmo que le permita leer tres valores A, B y C e 
indique cual es valor del centro. Análisis: Una vez leídos los valores 
en cada uno de los indicadores (variables A, B, C) se procede a comparar 
cada uno de ellos con los otros dos para verificar si es valor del centro 
o no. Un valor es del centro si es menor que uno y mayor que otro o el 
caso contrario. Igualmente se asume que los tres valores leídos son 
diferentes.*/

#include <stdio.h>

int main() {

   float a,b,c;

	printf("Introduzca el primer numero: ");
	scanf("%f", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &b);
    printf("Introduzca el tercer numero: ");
	scanf("%f", &c);

   if ( a>=b && a>=c )
        printf( "\n%.2f es el mayor.", a );
    else
        if (b>c)
            printf("\n%.2f es el mayor.", b);
        else
            printf("\n%.2f es el mayor.", c);
   return 0;
};