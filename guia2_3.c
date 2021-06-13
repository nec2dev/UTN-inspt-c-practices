/*3.Ingresa  dos números enteros, la computadora indica si el 
mayor es divisible por el menor.*/
#include <stdio.h>

int main() {

   int a,b;

	printf("Introduzca el primer numero: ");
	scanf("%f", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &b);

   if(a>b) {
       if(a%b==0){
       printf("El número %f es divisible por %f", a,b);
       }
   }
   else if(a==b) {
       printf("Los numero son iguales");
   }
   else {
       if(b%a==0){
       printf("El número %f es divisible por %f", b,a);
       }
   }

   return 0;

};