/*27. Los antiguos griegos llamaban números perfectos a aquellos que son 
iguales a la suma de sus divisores (exceptuando al mismo número),como por 
ejemplo el 6=1+2+3.Escribir un programa que lea un número N y emita los 
N primeros números perfectos.*/

#include <stdio.h>

int main (){

    int num, sum=0,i;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);

    printf("%d= ", num);
    for(i=1; i<num; i++){
        if(num%i==0){
        printf("%d + ", i);
        }
    }
    return 0;
}