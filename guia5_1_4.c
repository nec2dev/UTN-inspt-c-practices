/*4.Escribir una función booleana de dos parámetros enteros, que 
devuelva 1 si el primer número es menor o igual que el segundo y 0 si 
es mayor.*/

#include<stdio.h>
#include<stdbool.h>

bool isequal(int num1, int num2){
    if(num1<=num2){
        return 1;
    }else{
        return 0;
    }
}
 
int main(){

    int num1, num2;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num1);

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num2);

    printf("%d",isequal(num1, num2));
    
}