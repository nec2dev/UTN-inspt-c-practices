/*Se ingresan 20 números por teclado y se indica si 
alguno fue negativo mediante un mensaje*/

#include <stdio.h>

int main (){
    int num, cont=0, contneg=0;
    do{
        printf("Por favor, ingrese un numero:");
        scanf("%i",&num);
        cont++;
        if (num<0){
            contneg++;
            printf("\nHa ingresado el valor negativo: %i", num);
            }
    }
    while(cont<=20);  
        printf ("\nHubo %i numeros negativos.", contneg);
    return 0;
}