/*7.	Ingresados dos números real, la computadora muestra su 
cociente. Si el segundo número es cero, la computadora muestra un 
mensaje indicando la imposibilidad de la operación. */

#include <stdio.h>

int main() {

   float a,b;

	printf("Introduzca el primer numero: ");
	scanf("%f", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &b);

   if(b==0) {
    printf("El cociente es0 y no es posible realizar la operación");
   }
   else {
      printf("El cociente es: %.2f", b);
   }
   return 0;
};