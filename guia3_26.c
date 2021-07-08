/*26. Leer dos números enteros y, usando el algoritmo de Euclides, 
emitir el máximo común divisor. Emitir también el mínimo común múltiplo.*/

#include <stdio.h>

int main (){

    int num1, num2, aux1, aux2, mcd=0, mcm=0;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num1);
    printf("Ahora ingrese otro numero entero: \n");
    scanf("%d", &num2);


    if(num1>num2){
        aux1=num1;
        aux2=num2;  
    }else{
        aux1=num2;
        aux2=num1;
    }

    do{
        mcd=aux2;
        aux2=aux1%aux2;
        aux1=mcd;
    }while(aux2!=0);

    mcm=(num1/mcd)*num2;

    printf("El maximo comun divisor de %d y %d, es: %d\n", num1, num2, mcd);
    printf("El minimo comun multiplo de %d y %d, es: %d\n", num1, num2, mcm);
 
    return 0;
}