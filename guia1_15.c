/*15.Construye  un programa que  permita  ingresarla superficiede  
un cuadrado (en m2), el mismo debe emitir por pantalla su perímetro.*/ 

#include <stdio.h>
#include <cmath>

int main() {

   float lado, superficie;
   
   printf("Por favor, Ingrese la superficie total del cuadrado en cm. cuadrado\n");
   scanf("%f", &superficie);

   float lado = sqrt(superficie);

    printf("El lado del cuadrado mide %.2f", lado, "cm.\n");

   return 0;
};