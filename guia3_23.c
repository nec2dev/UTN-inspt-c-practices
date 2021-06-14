/*Se ingresa un número entero y, la computadora indica si es primo o no.  */

#include <stdio.h>

int main (){

    int num, i, a=0;

    printf("Ingrese un numero entero para indicar si es numero primo o no: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
    if(num%i==0) 
    a++;
    }

    if(a==2)
    printf("El numero ingresado es numero primo");
    else
    printf("El numero ingresado no es numero primo");
 
    return 0;
}