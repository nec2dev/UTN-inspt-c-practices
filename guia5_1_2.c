/*2. Idem 1 pero la función debe retornar 1 si el número es positivo y 0 
si no lo es. Usarla en una main para indicar si números ingresados son 
positivos o no.*/

#include <stdio.h>

int ispositive(int num){
    if(num>0){
       return 1;
    }else{
        return 0;
    }
}

int main (){

    int num, aux;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);

    aux=ispositive(num);

    if(aux==1){
        printf("El numero ingresado es positvo");
    }else{
        printf("El numero ingresado no es positvo");
    }

    return 0;
}