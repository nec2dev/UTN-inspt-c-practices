/*7.	Ingresados dos números reales, la computadora muestra su 
cociente. Si el segundo número es cero, la computadora muestra un 
mensaje indicando la imposibilidad de la operación. */

#include <stdio.h>

int main() {

   float a,b;

	printf("Introduzca el primer numero: ");
	scanf("%f", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &b);

   if((a+b)%2==0) {
    printf("la suma de los números ingresados es par");
   }
   else {
      printf("la suma de los números ingresados es impar");
   }

   return 0;

};