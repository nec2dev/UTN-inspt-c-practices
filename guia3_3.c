/*3. Se leen 20 números y se emite su promedio.*/

#include <stdio.h>

int main (){
    int num, cont=0, sum=0;
    float prom;
    do{
        printf("Por favor, ingrese un numero:");
        scanf("%i",&num);
        cont++;
        sum=sum+num;
    }
    while(cont<=20);  
        prom = sum/cont;
        printf ("\nEl promedio de los 20 numeros ingresados es de: %.2f.", prom);
    return 0;
}