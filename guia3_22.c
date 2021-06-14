/*Se ingresa un número natural N y la computadora muestra 
los primeros N términos de la sucesión de Fibonacci: 
1,1,2,3,5,8,13,21,34, ... */

#include <stdio.h>

int main (){

    int termino1=1, termino2=1, Sigtermino=0, num;

        printf("Ingrese un numero positivo para indicar la cantidad de elementos de la serie Fibonacci: ");
        scanf("%d", &num);

        printf("Serie de Fibonacci: %d, %d, ", termino1, termino2);
        Sigtermino=termino1+termino2;

    for(int i=1;i<num-1;i++) {      
        termino1=termino2;
        termino2=Sigtermino;
        Sigtermino= termino1+termino2;
        printf("%d, ",Sigtermino);
    }

    return 0;
}