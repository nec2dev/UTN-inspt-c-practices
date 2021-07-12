/*8.Se pide un programa que lea una temperatura en la escala Fahrenheit, 
la convierta en la correspondiente temperatura en la escala Celsius,
y muestre las dos temperaturas justificadas a la derecha. 
El programa principal ha de apoyarse en una función FaC que, dado un 
entero (la temperatura en la escala Fahrenheit), devuelva la 
correspondiente temperatura en la escala Celsius (redondeando).*/

#include<stdio.h>
#include <math.h>

int FaC(int far){
    int cel=round((far-32)*5/9);
    return cel;
}
 
int main(){

    int far;
    
    printf("Ingrese los grados fahrenheits medidos\n");
    scanf("%d", &far);

    printf("%d %cF\n", far, 167);
    printf("%d %cC\n", FaC(far), 167);

    return 0;
    
}