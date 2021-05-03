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
    int menuselected;

    printf("Por favor ingrese un n%cmero entero.\n", 163);
    scanf("%i", &num001);

    printf("Ingrese otro n%cmero entero.\n", 163);
    scanf("%i", &num002);

    printf("Ahora, por favor, ingrese un tercer n%cmero entero.\n", 163);
    scanf("%i", &num003);

    int numbers[3] = {num001, num002, num003};

    printf("Elija una opci%cn del men%c:\n", 162, 163);
    printf("1 -> El producto de n%cmeros pares.\n", 163);
    printf("2 -> El promedio de los n%cmeros ingresados y el porcentaje de n%cmeros pares ingresados.\n",163, 163);
    printf("3 -> Mostrar el máximo de los n%cmeros ingresados.\n", 163);
    printf("4 -> La suma de los cuadrados de aquellos que sean impares.\n");
    scanf("%i", &menuselected);
     

    switch(menuselected){
        case 1: for(int i=0; i<=2; i++){           
            if(numbers[i]%2==0){
                int num = num*numbers[i];
                printf("%i\n", num);
            }         
        }
        break;
        case 2: 
        break;
        case 3: 
        break;
        case 4: 
        break;
        default: printf("No ha ingresado un valor valido");
    }

    return(0);
}