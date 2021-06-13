/*25.Desarrolla un algoritmo que le permita leer un valor
cualquiera N y escribir si dicho número es común divisor 
de otros dos valores leídos W y Z. 
Análisis: Para resolver el ejercicio planteado, hay que 
leer primero el valor del número y almacenarlo en una 
variable (N). Leer dos valores más y almacenarlos en las
variables W y Z respectivamente. Para saber si el valor 
almacenado en la variable N es común divisor de W y Z, 
se chequea para ver si la división entre W/n y Z/n son 
exactas. En caso de ser exactas entonces el valor 
numérico almacenado en la variable N es común divisor 
de los dos. En caso contrario no lo será.*/

#include <stdio.h>

int main (){
    
     int n, z, w;

     printf("Ingrese un n%cmero cualquiera: \n", 163);
     scanf("%f", &n);

     printf("Ahora ingrese un n%cmero para saber si el anterior es com%cn divisor: \n", 163, 163);
     scanf("%f", &z);

     printf("Ahora ingrese otro n%cmero para saber si tambien es com%cn divisor del primero: \n", 163, 163);
     scanf("%f", &z);

     if(z%n==0&&w%n==0){
         printf("%f es com%cn divisor de %f y de %f", n, 163, z, w);
     }
     else
     printf("%f no es com%cn divisor entre %f y de %f", n, 163, z, w);

     return 0;
};