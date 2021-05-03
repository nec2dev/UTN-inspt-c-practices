/*Se leen 20 números y se emite un mensaje indicando 
cuantos fueron negativos.*/

#include <stdio.h>

int main (){
    int num, cont=0, contneg=0;
    do{
        printf("Por favor, ingrese un numero:");
        scanf("%i",&num);
        cont++;
        if (num<0){
            contneg++;
        }
    }
    while(cont<=20);  
        printf ("\nHubo %i numeros negativos.", contneg);
    return 0;
}