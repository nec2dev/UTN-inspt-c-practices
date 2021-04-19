/*3.Ingresa  dos números enteros, la computadora indica si el 
mayor es divisible por el menor.*/
#include <stdio.h>

int main() {

   int a,b;

	printf("Introduzca el primer numero: ");
	scanf("%d", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%d", &b);

   if(a>b) {
       if(a%b==0){
       printf("El número %d es divisible por %d", a,b);
       }
   }
   else if(a==b) {
       printf("Los numero son iguales");
   }
   else {
       if(b%a==0){
       printf("El número %d es divisible por %d", b,a);
       }
   }

   return 0;

};