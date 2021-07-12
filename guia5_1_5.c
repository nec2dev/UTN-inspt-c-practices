/*5.Escribir un programa que, utilizando funciones, lea desde el teclado 
las unidades y el precio que quiere comprar, y dependiendo de  las 
unidades introducidas le haga un descuento o no.*/

#include <stdio.h>
#include<stdbool.h>

int readunits(){
    int units;
    printf("Ingrese las unidades compradas\n");
    scanf("%d", &units);
    return units;
}

float readprices(){
    float price;
    printf("Ingrese el precio\n");
    scanf("%f", &price);
    return price;
}

bool apdiscount(int apunits){
    if(apunits>20){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    float apprice=readprices();
    int apunits=readunits();
    int discount=apdiscount(apunits); 

    if(discount==1){
        printf("Se aplico un descuento del 20%, precio final: $ %f\n", (apprice*apunits)-((apprice*apunits)*0.2));
    }else{
        printf("No se aplico un descuento, precio final: $ %f\n", apprice*apunits);
    }

    return 0;
}