/*23.Desarrolla  un  algoritmo  que  permita  calcular  
el  área  de  un  triángulo  en función de las longitudes 
de sus lados previamente leídos desde el teclado*/

#include <stdio.h>
#include <math.h>

int main (){

     float lado_1, lado_2, lado_3, semiperimetro, triangleArea;

     printf("Ingrese la medida de un lado del triángulo: \n");
     scanf("%f", &lado_1);

     printf("Ingrese otra medida de lado del triángulo: \n");
     scanf("%f", &lado_2);

     printf("Ahora, ingrese la medida restante del lado del triángulo: \n");
     scanf("%f", &lado_3);

     float calculateTriangleArea (float lado_1, float lado_2, float lado_3)
     {
        semiperimetro=(lado_1+lado_2+lado_3)/2;
        triangleArea = sqrt(semiperimetro*(semiperimetro-lado_1)*(semiperimetro-lado_2)*(semiperimetro-lado_3));
        return triangleArea;
     }

     printf("El área del triángulo es de: %f", calculateTriangleArea(lado_1, lado_2, lado_3));
    
     return 0;
};