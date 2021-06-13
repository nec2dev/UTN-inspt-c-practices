/*27.Desarrolla un algoritmo que le permita leer tres 
valores A,  B y  C e indicar si la suma de dos números 
cualquiera es igual al tercero. Análisis: Primero se 
deben leer los tres valores y almacenar cada valor en 
una variable. En el caso del ejemplo se guardaran los 
valores en los identificadores A, B, y C. luego se 
procederá a realizar las diferentes comparaciones.*/

#include <stdio.h>

int main (){
    
     float a, b, c;

     printf("Ingrese un n%cmero cualquiera: \n", 163);
     scanf("%f", &a);

     printf("Ingrese otro n%cmero cualquiera: \n", 163);
     scanf("%f", &b);

     printf("Ingrese un tercer n%cmero cualquiera: \n", 163);
     scanf("%f", &c);

     if(a+b==c){
         printf("%f + %f = %f", a, b, c);
     }
     if(b+c==a){
         printf("%f + %f = %f", b, c, a);
     }
     if(c+a==b){
         printf("%f + %f = %f", c, a, b);
     }
     else
     printf("la suma de dos n%cmeros cualquiera no fue igual a un tercero", 163);

     return 0;
};