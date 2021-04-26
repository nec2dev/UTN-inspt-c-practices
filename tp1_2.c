/*Escribir un programa que permita la entrada de tres números 
y realizar un menú que permita seleccionar entre varias opciones 
las cuales deben realizar las distintas operaciones

El producto de números pares  
El promedio de los números ingresados y el porcentaje de números 
pares ingresados 
Mostrar el máximo de los números ingresados  
La suma de los cuadrados de aquellos que sean impares 
*/  

#include <stdio.h>
#include <stdlib.h>

int main(){
     
    int num001, num002, num003;
    char menuselected;

    printf("Por favor ingrese un número entero.\n");
    scanf("%i", &num001);

    printf("Ingrese otro número entero.\n");
    scanf("%i", &num002);

    printf("Ahora, por favor, ingrese un tercer número entero.\n");
    scanf("%i", &num003);

    int numbers[3] = {num001, num002, num003};

    printf("Elija una opción del menú:\n");
    printf("1 -> El producto de números pares.\n");
    printf("2 -> El promedio de los números ingresados y el porcentaje de números pares ingresados.\n");
    printf("3 -> Mostrar el máximo de los números ingresados.\n");
    printf("4 -> La suma de los cuadrados de aquellos que sean impares.\n");
    printf("5 -> Salir del programa.\n");
    scanf("%i", &menuselected);

    int i, even=0, evenProd;
    //int productEvenNumbers(int numbers){
        for (i=1; i<=2; i++) {
            if(numbers[i]%2 == 0){ 
                even++;
                evenProd *= (numbers[i]);  
                printf("%i", evenProd);  
            }
            
        }
        
    //};

    

    switch(menuselected){
        case 1: printf("El producto de los números pares es de: %i", productEvenNumbers(numbers));
        break;
        case 2: printf(" ");
        break;
        case 3: printf(" ");
        break;
        case 4: printf(" ");
        break;
        case 5: printf(" ");
        break;
        default: printf(" ");
    };
    return 0;
};