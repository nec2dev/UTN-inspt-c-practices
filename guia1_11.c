/*11.Construye un programa que pregunte los años que tienes y 
emita comorespuesta el número de días vividos*/

#include <stdio.h>

int main (){

     int age;

     printf("Ingrese su edad: \n");
     scanf("%i", &age);

     int ageToDays (int age) {
         int todays = age*365;
         return todays;
     };

     printf("Has vivido : %f días.", ageToDays(age));

};