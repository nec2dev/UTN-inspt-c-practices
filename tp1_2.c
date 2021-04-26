/*Escribir un programa que permita la entrada de tres números 
y realizar un menú que permita seleccionar entre varias opciones 
las cuales deben realizar las distintas operaciones

-El producto de números pares  
-El promedio de los números ingresados y el porcentaje de números 
pares ingresados 
-Mostrar el máximo de los números ingresados  
-La suma de los cuadrados de aquellos que sean impares 
*/  

#include <stdio.h>
#include <stdlib.h>

int main(){
     
    int num001, num002, num003;
    char menuselected;

    printf("Por favor ingrese un n%cmero entero.\n", 163);
    scanf("%i", &num001);

    printf("Ingrese otro n%cmero entero.\n", 163);
    scanf("%i", &num002);

    printf("Ahora, por favor, ingrese un tercer n%cmero entero.\n", 163);
    scanf("%i", &num003);

    

    printf("Elija una opción del men%c:\n", 163);
    printf("1 -> El producto de n%cmeros pares.\n", 163);
    printf("2 -> El promedio de los n%cmeros ingresados y el porcentaje de n%cmeros pares ingresados.\n",163, 163);
    printf("3 -> Mostrar el máximo de los n%cmeros ingresados.\n", 163);
    printf("4 -> La suma de los cuadrados de aquellos que sean impares.\n");
    printf("5 -> Salir del programa.\n");
    fflush(stdin);
    scanf("%c", &menuselected);

    int i, even=0, evenProd;

    int productEvenNumbers(int num001, int num002, int num003){
            
        }         

    int averageEvenPercentage(){

    }

    int biggerNumber(){

    }

    int sumSquaresOddNumbers(){

    }

    switch(menuselected){
        case 1: printf("El producto de los n%cmeros pares es de: %i", 163, productEvenNumbers(num001, num002, num003));
        break;
        case 2: printf("El promedio de los n%cmeros ingresados es de %f y el porcentaje de n%cmeros pares ingresados es de %i%", 163, 163, averageEvenPercentage(num001, num002, num003));
        break;
        case 3: printf("El máximo de los n%cmeros ingresados es %i", 163, biggerNumber(num001, num002, num003));
        break;
        case 4: printf("La suma de los cuadrados de aquellos que sean impares es de %i", sumSquaresOddNumbers(num001, num002, num003));
        break;
        case 5: printf("Adiós!");
                exit();
        break;
        default: printf("No ha ingresado un valor válido");
    }

}