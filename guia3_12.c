/*Dados N enteros, se emite un mensaje indicando si 
ingresaron en orden creciente, decreciente o desordenados.*/

#include <stdio.h>

int main (){
    int numint, actual, aux; 
    
    printf("ingrese cuantos numeros enteros va a ingresar:\n");
    scanf("%d", &numint);

    for(int i=0;i<=numint;++i){
       printf("Ingrese el %d%c numero:\n",i, 167); 
       scanf("%d", aux);
        if(aux>actual){
        printf();
        break;  
    }
    return 0;
}