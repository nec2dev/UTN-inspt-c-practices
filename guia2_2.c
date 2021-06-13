/*2. Desarrolla un algoritmo que le permita leer dos valores (A y B) 
y que escriba cuál de los dos valores leídos es el mayor. Análisis: 
primero se deben leer los dos valores y almacenar cada uno de ellos 
en una variable. Para el caso del desarrollo se almacenará un valor 
en la variable A y el otro en la variable B. Para poder saber cuál de 
los dos valores es mayor simplemente se comparan las dos variables y 
se escribirá cuál de las dos es la mayor. Se supone que los dos valores 
leídos son diferentes.*/

#include <stdio.h>

#include <stdio.h>

int main() {

   int a,b;
			printf("Introduzca el primer numero: ");
			scanf("%f",&a);
			printf("Introduzca el segundo numero: ");
			scanf("%f",&b);

   if(a>b) {
       printf("El mayor es el primer numero");
   }
   else if(a==b) {
       printf("Los numero son iguales");
   }
   else {
       printf("El mayor es el segundo numero");
   }

   return 0;

};
