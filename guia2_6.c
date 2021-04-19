/*6. Desarrolla un algoritmo que le permita leer dos valores A y B 
e indicar si la suma de los dos números es par. Análisis: Primero se 
leen los dos datos almacenando cada uno de ellos en un variable, en 
el caso del ejercicio el primer valor se almacena en la variable A y 
el segundo se almacena en la variable B. Al sumarlos para saber si el 
resultado es par o impar se divide entre dos chequeando el residuo. 
Si el residuo es cero es porque el valor es par y si el residuo es 
uno es porque el valor es impar.*/

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