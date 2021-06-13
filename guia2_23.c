/*23.Construye un programa que ingrese los valores de
los lados de un triángulo:
    a.Valide si las medidas pueden formar un triángulo.
    b.Detecte y muestre un mensaje correspondiente a 
    su tipo (EQUILÁTERO, ISÓSCELES, O ESCALENO); 
*/
#include <stdio.h>

int main (){

     float lado1, lado2, lado3, eq, iso, esc;

     printf("Ingrese la medida de los lados del tri%cngulo para saber su tipo: \n", 160);
     scanf("%f %f %f", &lado1, &lado2, &lado3);

     if(lado1==lado2&&lado2==lado3){
         printf("El tri%cngulo es equil%ctero", 160, 160);
     }
     if(lado1==lado2||lado2==lado3||lado3==lado1){
         printf("El tri%cngulo es is%cceles", 160, 162);
     }
     else
     printf("El tri%cngulo es escaleno", 160);

     return 0;
};

