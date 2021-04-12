/*12.Construye  un  programa que  dados  el  valor  de  1 kg  
de  determinada mercadería y la cantidad mercadería comprada, 
emite el valor del total a pagar*/

#include <stdio.h>

int main (){

     int age;

     printf("Ingrese su edad: \n");
     scanf("%i", &age);

     int ageToDays (int age) {
         int todays = age*365;
         return todays;
     };

     printf("Has vivido : %d días.", ageToDays(age));

};