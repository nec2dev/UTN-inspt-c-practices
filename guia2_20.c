/*20.Ingresados  3 números enteros, la computadora indica si están 
desordenados u ordenados en forma creciente o decreciente.*/

#include <stdio.h>

int main() {

    int num001, num002, num003;
   
    printf("Por favor, Ingrese un n%cmero entero\n", 163);
    scanf("%i", &num001);

    printf("Ahora, Ingrese otro n%cmero entero, por favor\n", 163);
    scanf("%i", &num002);

    printf("Ingrese un %cltimo n%cmero entero, por favor\n", 163, 163);
    scanf("%i", &num003);

    if(num001<num002<num003){
        printf("Los n%cmeros estan ordenados de forma ascendente", 163);
    }else if(num003<num002<num003){
        printf("Los n%cmeros estan ordenados de forma descendente",163);
    }else{
        printf("Los n%cmeros estan desordenados", 163);
        }

    return 0;
};