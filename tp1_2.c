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
    printf("4 -> El producto de números pares La suma de los cuadrados de aquellos que sean impares.\n");
    printf("5 -> Salir del programa.\n");
    scanf("%c", &menuselected);

    printf(numbers);

    // float productEvenNumbers(int numbers){
    //     if(number%2 == 0)
    //         even_sum = even_sum + number;
    //     else
    //         printf("Lo siento, no se ingresó ningun número par\n");
    // return 0;
    // }

    // }

    // switch(menuselected){
    //     case 1: printf("%f", productEvenNumbers(num001, num002, num003));
    //     break;
    //     case 2: printf("El día %d es Martes",dia);
    //     break;
    //     case 3: printf("El día %d es Miércoles",dia);
    //     break;
    //     case 4: printf("El día %d es Jueves",dia);
    //     break;
    //     case 5: printf("El día %d es Viernes",dia);
    //     break;
    //     default: printf("El día no existe");
    // }
    // return 0;
    };