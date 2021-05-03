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
     
    int num001, num002, num003, menuselected, oddsquaresum, oddsquare001, oddsquare002, oddsquare003, num1prod, num2prod, num3prod, evenprod, num; 
    float prom, num1percent, num2percent, num3percent, maxnum;

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
    printf("3 -> Mostrar el mAximo de los n%cmeros ingresados.\n", 163);
    printf("4 -> La suma de los cuadrados de aquellos que sean impares.\n");
    scanf("%i", &menuselected);
     

    switch(menuselected){
        case 1: 
            if(num001%2 == 0){
                num1prod = num001;
            }
            else{
                num1prod = 1;
            }
            if(num002%2 == 0){
                num2prod = num002;
            }
            else{
                num2prod = 1;
            }
            if(num003%2 == 0){
                num3prod = num003;
            }
            else{
                num3prod = 1;
            }
            evenprod=(num1prod*num2prod*num3prod);
            printf("El producto de los numeros pares es de %i", evenprod);
        break;

        case 2: 
            prom=(num001+num002+num003)/3;
            
            if(num001%2 == 0){
                num1percent = 33.33;
            }
            else{
                num1percent = 0;
            }
            if(num002%2 == 0){
                num2percent = 33.33;
            }
            else{
                num2percent = 0;
            }
            if(num003%2 == 0){
                num3percent = 33.33;
            }
            else{
                num3percent = 0;
            }
            float evenpercent=num1percent+num2percent+num3percent;
            printf("El promedio de los numeros ingresados es de %.2f y el porcentaje de numeros pares ingresados es de %.2f %", prom, evenpercent); 
        break;

        case 3: 
            if(num001>num002){
                maxnum = num001;
            }
            if(num002>num001){
                maxnum = num002;
            }
            if(num003>maxnum){
                maxnum = num003;
            }
            else{
                printf("");
            }
            printf("El mayor de los numeros ingresados es: %.0f", maxnum);
        break;

        case 4: 
            if(num001%2 == 0){
                oddsquare001 = 0;
            }
            else{
                oddsquare001 = num001*num001;
            }
            if(num002%2 == 0){
                oddsquare002 = 0;
            }
            else{
                oddsquare002 = num002*num002;
            }
            if(num003%2 == 0){
                oddsquare003 = 0;
            }
            else{
                oddsquare003 = num003*num003;
            }
            oddsquaresum=oddsquare001+oddsquare002+oddsquare003;
            printf("La suma de los cuadrados de aquellos que sean impares es de %i", oddsquaresum);
        break;

        default: printf("No ha ingresado un valor valido");
    }

    return(0);
}