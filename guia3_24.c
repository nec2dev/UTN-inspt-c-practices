/*24. Se ingresa un número entero N y se emiten los N primeros números primos.*/

#include <stdio.h>

int main (){

    int num, i, primo, a=0;

    printf("Ingrese un numero entero para indicar la cantidad de numeros primos a mostrar: ");
    scanf("%d", &num);

    for (i=1;i<=num;i++){
        primo=1;
        a=2;
        while(a<=i/2&&primo){
            if(i%a==0)
                primo=0;
                a++;
        }
        if(primo)
            printf("%d, ",i);
    }
 
    return 0;
}