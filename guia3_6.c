/*6. Se lee una serie de N números, de a uno y se emite:
              a) la cantidad de positivos;
              b) el valor del primer y último números leídos; 
              c) la sumatoria; 
              d) la productoria.*/

#include <stdio.h>

int main(){

   int n, i; 
   float num, prom, sum=0;

	printf("Introduzca cuantos numeros quiere ingresar:");
	scanf("%i", &n);
    
	for(i=0; i<=n; i++){
        printf("Por favor, ingrese un numero:");
        scanf("%f", &num);
        sum=sum+num;
    }
    while(i<n);  
        prom = sum/cont;
        printf ("\nEl promedio de los %.i numeros ingresados es de: %.2f.", cont, prom);
    return 0;
};
