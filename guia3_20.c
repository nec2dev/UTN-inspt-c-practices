/*Se lee un número real L perteneciente al intervalo 
[1,10], y la computadora informa la cantidad de términos 
de la serie armónica necesarios para satisfacer la 
desigualdad: 1 + 1/2 + 1/3 + 1/4 + ... + 1/n  >  L */

#include <stdio.h>

int main (){

    int cuenta=0;
    float l; 
    double suma=0;
    
    //pedimos un numero positivo entre 1 y 10
    printf("ingrese un numero real entre 1 y 10:\n");
    scanf("%f",&l);

    while(!(l>=1&&l<=10)){
       printf("el numero debe tener un valor entre 1 y 10:\n");
       scanf("%f",&l);
    }    
    
    while(suma<l){
        cuenta++;
        suma=suma+(1/(cuenta*1.0));
    }
        printf("\nValores:\n\nCuenta= %d \nSuma= %.18f",cuenta,suma);

    return 0;
}
