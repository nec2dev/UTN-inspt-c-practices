/*24.Desarrolla un algoritmo que permita determinar el área y volumen 
de un cilindro cuyo radio (r) y altura (h) se leen desde teclado.*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main (){

     float radio, altura;

     printf("Ingrese el radio del cilindro en centímetros: \n");
     scanf("%f", &radio);

     printf("Ingrese la altura del cilindro en centímetros: \n");
     scanf("%f", &altura);

     float calculateCylinderArea(float radio, float altura)
     {
        float areaCilindro = 2*PI*radio*(radio+altura);
        return areaCilindro;
     }

     float calculateCylinderVolume(float radio, float altura)
     {
        float volumenCilindro = PI*pow(radio, 2)*altura;
        return volumenCilindro;
     }

     printf("El área del cilindro es de: %f centímetros cuadrado\n", calculateCylinderArea(radio, altura));
     printf("El volumen del cilindro es de: %f centímetros cúbicos\n", calculateCylinderVolume(radio, altura));
    
     return 0;
};