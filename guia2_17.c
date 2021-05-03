/* 17. Vuelve a escribir el fragmento anterior, pero utilizando el 
operador || (OR) en la condición de If.*/

#include <stdio.h>

int main() {

    float estatura, peso;

    printf("Ingrese la estatura"); 
    scanf("%f", &estatura); 

    printf("Ingrese el peso"); 
    scanf("%f", &peso);

    if(estatura>1.82 || peso>90.7) 
    printf( "Peso excesivo!"); 

    else 
    printf( "Peso adecuado.");  

};