/*29. Se lee un número no determinado de veces una terna formada por 
legajo (int), edad(entero) y sueldo (real). El fin del lote se indica 
con un legajo == -1. Se desea emitir: 
- el legajo del mas joven
- el sueldo promedio de quienes tengan entre 20 y 30 años
- el legajo del último de la lista*/

#include <stdio.h>

int main (){

    int leg=0, edad, youngleg, youngage=1000, lastleg, cont=0;
    float sueldo, sum=0;
    
    printf("Ingrese el numero de legajo: \n");
    scanf("%d", &leg);

    while(leg!=-1){
        printf("Ingrese la edad: \n");
        scanf("%d", &edad);
        printf("Ingrese el sueldo: \n");
        scanf("%f", &sueldo);
        if(edad<youngage){
            youngage=edad;
            youngleg=leg;
        }
        if(edad>=20 && edad <=30){
            cont++;
            sum+=sueldo;
        }
        lastleg=leg;
        printf("Ingrese el numero de legajo: \n");
        scanf("%d", &leg);
    }
    
    printf("El legajo del mas joven: %d\n", youngleg);
    printf("El sueldo promedio de quienes su edad este entre 20 y 30 : $ %.2f\n", sum/cont);
    printf("El legajo del ultimo de la lista: %d\n", lastleg);

    return 0;
}