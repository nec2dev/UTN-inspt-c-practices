/*13.Construye un programa que permita ingresar los valores de 2 de 
los ángulos interiores de un triángulo, y se emita por pantallael 
valor del restante.*/

#include <stdio.h>

int main (){

     float angle_1, angle_2, angle_3;

     printf("Ingrese el valor en grados de un ángulo del triángulo: \n");
     scanf("%.2f", &angle_1);

     printf("Ingrese el valor en grados de otro ángulo del triángulo: \n");
     scanf("%.2f", &angle_2);

     float calculateAngle (float angle_1, float angle_2);{
         float angle_3 = 180-(angle_1+angle_2);
         return angle_3;
     };

     printf("El ángulo restante es de : %.2f °.", calculateAngle(angle_1, angle_2));

};

//Ver un método para acotar el valor del ángulo ingresado de 1 a 179
