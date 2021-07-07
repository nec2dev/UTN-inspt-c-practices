/*12. Dados N enteros, se emite un mensaje indicando si 
ingresaron en orden creciente, decreciente o desordenados.*/

#include <stdio.h>

int main (){
    int numint, actual, aux; 
    
    printf("ingrese cuantos numeros enteros va a ingresar:\n");
    scanf("%d", &numint);

    for(int i=1;i<=numint;++i){
       printf("Ingrese el %d%c numero:\n",i, 167); 
       scanf("%d", aux); 
    }

    return 0;
}