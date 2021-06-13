/*22.Se lee un número entero correspondiente a un año, 
y se muestra un mensaje indicando si es año bisiesto.*/

#include <stdio.h>


int main (){

     int year;

     printf("Ingrese el a%co para saber si es bisiesto: \n", 164);
     scanf("%d", &year);

     if(year%4==0||year%400==0&&year%100!=0)
     printf("El a%co ingresado (%d) es bisiesto: \n", 164, year);
     
     else
     printf("El a%co ingresado (%d) no es bisiesto: \n", 164, year);
     return 0;
};
