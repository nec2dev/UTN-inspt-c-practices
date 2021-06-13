/*24.Desarrolla un algoritmo que le permita leer un
valor cualquiera N y escribir si dicho número es 
múltiplo de Z. Análisis: Para resolver el ejercicio 
planteado anteriormente, hay que leer primero el valor 
del número y almacenarlo en una variable (N). 
Luego leer otro valor y almacenarlo en la variable Z. 
Para saber si el número almacenado en la variable N es 
múltiplo del número almacenado en Z, se hace la división 
entre Z y N, si la división es exacta entonces N es 
múltiplo de Z, de lo contrario N no será múltiplo de Z.*/
#include <stdio.h>

int main (){
    
     float n, z;

     printf("Ingrese un n%cmero cualquiera: \n", 163);
     scanf("%f", &n);

     printf("Ahora ingrese otro n%cmero para saber si el anterior es m%cltiplo de este: \n", 163, 163);
     scanf("%f", &z);

     if(z%n==0){
         printf("%f es m%cltiplo de %f", n, 163, z);
     }
     else
     printf("%f no es m%cltiplo de %f", n, 163, z);

     return 0;
};