/*28.Los mismos antiguos griegos llamaban números amigos a aquellos tales 
que cada uno es igual a la suma de los divisores del otro; tal como 
sucede con 220 y 284. 
Escribir un programa que lea un N y emita N pares de números amigos.
*/

#include <stdio.h>

int main (){

    int num, amigo=0, cont=0, i;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);
    
    for(i=1; i<num; i++){
        if(num%i==0){
            amigo+=i;
            if(amigo%2==0){
            cont++;
            printf("%d, ", amigo);
            }
        }
    }
    printf("\nPara el numero %d encontramos %d numeros amigos pares.\n", num, cont);
    

    return 0;
}