/*21.Ingresa una cantidad entera de segundos y conviertelaen horas, 
minutos y segundo utilizando los operadores de cociente y resto enteros.*/

#include <stdio.h>
#include <math.h>

int main() {

    int segundos, minutos, horas, segundosfinal;
   
    printf("Por favor, Ingrese la cantidad de segundos\n");
    scanf("%i", &segundos);

    horas = segundos/3600;
    minutos = (segundos-horas*3600)/60;
    segundosfinal = segundos-(horas*3600+minutos*60);

    printf("%i expresados en horas, minutos y segundos= %i:%i:%i.", segundos, horas, minutos, segundosfinal);

   return 0;
};  