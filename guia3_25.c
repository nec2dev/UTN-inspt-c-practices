/*La conjetura de Goldbach (demostrada hace pocos años) sostiene que todo 
número par mayor que 2 es la suma de dos números primos. 
a) Escribir un programa que lea un número entero, validar que sea par 
y emitir los dos números primos que sumados dan el número par ingresado. 
b) Demostrar la propiedad ;-) */

#include <stdio.h>

int main (){

    int num, i, primo, primomay, primomen, a=0;

    printf("Ingrese un numero par mayor que 2 y el programa devolvera los dos numeros primos que lo suman: \n");
    scanf("%d", &num);
    while(num%2!=0 && num<=2){
        printf("Entrada no válida, recuerde ingresar un numero par mayor que 2\n");
        scanf("%d", &num);
    }

    for (i=1;i<=num;i++){
        primo=1;
        a=2;
        while(a<=i/2&&primo){
            if(i%a==0)
                primo=0;
                a++;
        }
        if(primo)
            primomay=i;
    }
    primomen=num-primomay;

    printf("los dos numeros primos que suman %d son: %d y %d", num, primomen, primomay);
 
    return 0;
}