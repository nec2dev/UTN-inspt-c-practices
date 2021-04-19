/*1.Desarrolla un algoritmo que le permita leer un valor cualquiera N 
y escribir en la pantalla si dicho número es Positivo, Negativo o 0 
(cero). */

#include <stdio.h>

int main() {

   double n;
   
   printf("Por favor, Ingrese un valor cualquiera");
   scanf("%d", &n);

   if(n>0) {
       printf("El número %d es Positivo", n);
   }
   else if(n==0) {
       printf("ingresó en número 0");
   }
   else {
       printf("El número %d es Negativo", n);
   }

   return 0;

};