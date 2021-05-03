/* 16. Completa el programa incluyendo el espacio en blanco en el 
siguiente fragmento de programa de manera que una persona de menos 
de 1,82 m. de estatura y peso superior a 90,7 Kg. se clasifique 
como de peso excesivo, y las demás personas como de peso adecuado.*/

#include <stdio.h>

int main() {

    float estatura, peso;

    printf("Ingrese la estatura"); 
    scanf("%f", &estatura); 

    printf("Ingrese el peso"); 
    scanf("%f", &peso);

    if(estatura>1.82 && peso>90.7) 
    printf("Peso excesivo!"); 

    else 
    printf("Peso adecuado.");  

};