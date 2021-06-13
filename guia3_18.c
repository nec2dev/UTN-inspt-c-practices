/*18. Se ingresa un número natural N, seguido de N números. 
La computadora muestra el valor de los dos mayores. Si 
todos los números fueron iguales, emitir un mensaje .*/

#include <stdio.h>

int main(){

    int cantent, entero, bignum, almostbignum;
    
    printf("ingrese la cantidad de numeros enteros a ingresar:\n");
    scanf("%d", &cantent);

    for(int i=1;i<=cantent;i++){
       printf("Ingrese el %d%c numero entero:\n",i, 167); 
       scanf("%d", &entero);

       if(entero>bignum){
       bignum=entero;
       }
    }

    printf("Los 2 numeros mayores ingresados fueron: %d y %d", bignum, almostbignum);

    return 0;
}