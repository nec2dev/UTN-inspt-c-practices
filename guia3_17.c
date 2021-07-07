/*17. Se ingresa un valor entero de hasta 6 cifras y se 
emite un mensaje indicando cuántas cifras tiene el 
número.*/

#include <stdio.h>

int main(){

    int num, cant=0;

    printf("Ingrese un numero entero\n");
    scanf("%d", &num);

    while(num/100000>=1){
        printf("El numero ingresado tiene mas de 6 cifras, ingrese un numero entero\n");
        scanf("%d", &num);
    }

    while(num>=1){
        num=num/10;
        cant++;
    }

    printf("El numero ingresado tiene %d cifras\n", cant);
}