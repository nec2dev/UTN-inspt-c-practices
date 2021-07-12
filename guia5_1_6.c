/*6.Hacer un programa que calcule el area de un círculo usando funciones.
La función debe recibir la medida del radio.*/

#include <stdio.h>
#include<stdbool.h>

float calculatecircarea(float radio){
    float circarea=3.14*radio*radio;
    return circarea;
}

int main(){

    float radio;

    printf("Ingrese la medida del radio del circulo\n");
    scanf("%f", &radio);

    printf("El area del cirsulo es: %.2f\n", calculatecircarea(radio));

    return 0;
}