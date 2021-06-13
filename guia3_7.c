/*.7. Se lee un número no determinado de veces un número 
enteros no nulos. El fin de datos se indica con un 0.
Se desea emitir el valor del promedio de los números 
positivos leídos.*/

#include <stdio.h>

int main (){
    int num, sum=0, cont=0;
    float prom;
    do{
        printf("Por favor, ingrese un numero entero:");
        scanf("%i",&num);
        if (num>0){
            cont++;
            sum=sum+num;
            }
    }
    while (num!=0);  
        prom = sum/cont;  
        printf ("\nEl promedio de los numero positivos ingresados es de: %.2f", prom);
    return 0;
}