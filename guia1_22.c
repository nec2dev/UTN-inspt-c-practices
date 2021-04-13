/*22.Desarrolla un algoritmo que permita leer un valor que represente 
una temperatura expresada en grados Celcius y convierta dicho valor 
en un valor expresado en grados Fahrenheit.*/

#include <stdio.h>

int main (){

     float grCelsius, grFahrenheit;

     printf("Ingrese el valor en grados Celsius de la temperatura tomada: \n");
     scanf("%f", &grCelsius);

     float fromCelsiusToFahrenheit (float grCelsius){
        grFahrenheit = (grCelsius*9/5)+32;
        return grFahrenheit;
     };

     printf("%.3f°C = %.3f°F.", grCelsius, fromCelsiusToFahrenheit(grCelsius));
    
     return 0;

};