/*18. Escribe un programa que reciba dos números enteros como entrada 
y escriba el mensaje "signos opuestos", sólo si uno de los números 
ingresados es negativo:
a) usando un sólo operador lógico 
b) sin utilizar operadores lógicos en la condición. */

#include <stdio.h>

int main() {

    int num001, num002;
   
    printf("Por favor, Ingrese un n%cmero entero\n", 163);
    scanf("%i", &num001);

    printf("Ahora, Ingrese otro n%cmero entero, por favor\n", 163);
    scanf("%i", &num002);

    while(num001>0||num002>0){
    if(num001<0){
        printf("signos opuestos");
    }else if(num002<0){
        printf("signos opuestos");
    }else{
        printf(" ");
        }
    }
    return 0;
};

