/*1.Desarrolla un algoritmo que le permita leer un valor cualquiera N 
y escribir en la pantalla si dicho número es Positivo, Negativo o 0 
(cero). */

#include <stdio.h>

int main() {

   float n;
   
   printf("Por favor, Ingrese un valor cualquiera");
   scanf("%f", &n);

   if(n>0) {
       printf("El número %f es Positivo", n);
   }
   else if(n==0) {
       printf("ingresó en número 0");
   }
   else {
       printf("El número %f es Negativo", n);
   }

   return 0;

};