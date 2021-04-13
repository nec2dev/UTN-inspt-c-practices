/*25.Desarrolla un algoritmo que permita calcular el área (a) de un 
segmento de círculo. Análisis: Para calcular el área de un segmento 
de círculo lo primero que hay que hacer es leer el valor del radio y 
leer el valor de xque es la distancia del centro al segmento. 
Una vez leído dichos valores se calcula aplicando la fórmula respectiva 
y por último se emite el valor del área.*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main (){

     float radio, distancia;

     printf("Ingrese el radio del ciírculo en centímetros: \n");
     scanf("%f", &radio);

     printf("Ingrese la distancia del centro al segmento en centímetros: \n");
     scanf("%f", &distancia);

     float calculateAreaCircleSegment(float radio, float distancia)
     {
        float sectorCircular = PI*pow(radio, 2)/2;
        float areaTriangulo = (distancia*sqrt(pow(radio, 2)-pow(distancia, 2))+pow(radio, 2)*asin(distancia/radio));
        float areaSegmentoCirculo = sectorCircular-areaTriangulo;
        return areaSegmentoCirculo;
     };

     printf("El área del segmento circular es de: %f centímetros cuadrado\n", calculateAreaCircleSegment(radio, distancia));
    
     return 0;
};

