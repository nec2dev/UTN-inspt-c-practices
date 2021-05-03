/*Se leen N números; se emite su promedio.*/

#include <stdio.h>

int main(){

   int cont=0, n; 
   float num, prom, sum=0;

	printf("Introduzca cuantos numeros quiere ingresar:");
	scanf("%i", &n);
    
	do{
        printf("Por favor, ingrese un numero:");
        scanf("%f", &num);
        cont++;
        sum=sum+num;
    }
    while(cont<n);  
        prom = sum/cont;
        printf ("\nEl promedio de los %.i numeros ingresados es de: %.2f.", cont, prom);
    return 0;
};
