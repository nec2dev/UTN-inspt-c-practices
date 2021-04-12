/*10.Desarrolla un algoritmo que permita, dados ciertos centímetros 
como entrada de tipo flotante, emitir por pantalla su equivalencia 
en pies (enteros) y en pulgadas (flotante, 1 decimal).*/

#include <stdio.h>

int main (){

     float height_cm;

     printf("Ingrese una medida en cm: \n");
     scanf("%f", &height_cm);

     float cmToFoots (float height_cm){
         float tofoot = height_cm*0.0328084;
         return tofoot;
     };

     float cmToInch (float height_cm){
         float toinch = height_cm*0.393701;
         return toinch;
     };

     printf("La medida ingresada es: %.2f en cm. Su equivalencia en pies es igual a : %.2f foot.", height_cm, cmToFoots(height_cm));
     printf("La medida ingresada es: %.2f en cm. Su equivalencia en pulgadas es igual a : %.2f inch.", height_cm, cmToInch(height_cm));

};