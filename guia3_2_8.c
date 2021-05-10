/*Se ingresa un numero no determinado de valores enteros. El último 
es -1. La computadora indica cuál fue el máximo número ingresado.*/

#include <stdio.h>

int main (){
    int num=0, aux=0;

    do{
        printf("Por favor, ingrese un numero entero:");
        scanf("%i",&num);
        if (aux>num){
             aux=num;
            }
    }
    while (num!=-1);   
        printf ("\nEl m%cximo de los n%cmeros ingresados es: %i", 160, 163, num);
    return 0;
}