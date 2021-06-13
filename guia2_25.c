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
     scanf("%d", &n);

     printf("Ahora ingrese un n%cmero para saber si el anterior es com%cn divisor: \n", 163, 163);
     scanf("%d", &z);

     printf("Ahora ingrese otro n%cmero para saber si tambien es com%cn divisor del primero: \n", 163, 163);
     scanf("%d", &z);

     if(z%n==0&&w%n==0){
         printf("%d es com%cn divisor de %d y de %d", n, 163, z, w);
     }
     else
     printf("%d no es com%cn divisor entre %d y de %d", n, 163, z, w);

     return 0;
};