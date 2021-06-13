/*4. Desarrolla un algoritmo que le permita leer 2 valores A y B e 
indicar si uno de los dos divide al otro exactamente. Análisis: 
Para dar solución al anterior ejercicio, primero se deben leer los 
dos valores y almacenar cada uno de ellos en una variable. Para el 
caso del desarrollo se almacenará un valor en la variable A y el otro 
en la variable B. Para saber si uno de los dos divide exactamente al 
otro se examina primero el caso en que B divida exactamente a A; se 
compara el residuo, si es cero se escribirá que divide exactamente 
a A de lo contrario se examina el caso en que A divida exactamente a B. 
Se compara nuevamente el residuo, si es cero se escribirá "A divide 
exactamente a B" sino "ninguno de los dos divide exactamente al otro". 
Se supone que los dos valores leídos son diferentes.  */

#include <stdio.h>

int main() {

   int a,b;

	printf("Introduzca el primer numero: ");
	scanf("%f", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &b);

   if(b>a) {
       if(b%a==0){
       printf("B divide exactamente a A");
       else{
           printf("ninguno de los dos divide exactamente al otro");
       }
       }
   }
   else if(a==b) {
       printf("Los numero son iguales, ingrese de nuevo los números");
   }
   else {
       if(b%a==0){
       printf("A divide exactamente a B");
       else{
           printf("ninguno de los dos divide exactamente al otro");
       }
       }
   }

   return 0;

};