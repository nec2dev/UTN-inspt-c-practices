/*19.Desarrolla  un  algoritmo  que  le  permita  leer  un valor 
para radio (R), calcular el área (A) de un círculo  y emitir su valor.*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main() {

    float radio, area;

    printf("\nIngrese el valor del radio: ");
    scanf("%f",&radio);

    float calculateCircleArea(float radio){
    area = PI*pow(radio, 2);
    //area = 3.141592 * (radio**2);
    return area;
    };
    
    printf("\nEl área del círculo es de : %.2f\n", CUAD(a));
    
    system("pause");
    
    return 0;
    
    }