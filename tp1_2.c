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
     
    float num001, num002, num003; 
    int menuselected;
    

    printf("Por favor ingrese un n%cmero entero.\n", 163);
    scanf("%f", &num001);

    printf("Ingrese otro n%cmero entero.\n", 163);
    scanf("%f", &num002);

    printf("Ahora, por favor, ingrese un tercer n%cmero entero.\n", 163);
    scanf("%f", &num003);

    printf("Elija una opci%cn del men%c:\n", 162, 163);
    printf("1 -> El producto de n%cmeros pares.\n", 163);
    printf("2 -> El promedio de los n%cmeros ingresados y el porcentaje de n%cmeros pares ingresados.\n",163, 163);
    printf("3 -> Mostrar el máximo de los n%cmeros ingresados.\n", 163);
    printf("4 -> La suma de los cuadrados de aquellos que sean impares.\n");
    printf("5 -> Salir del programa.\n");
    scanf("%i", &menuselected);

    float productEvenNumbers(float num001, float num002, float num003){
            int num1 = (int)num001;
            int num2 = (int)num002;
            int num3 = (int)num003;
            int num1prod, num2prod, num3prod;
            if(num1%2 == 0){
                num1prod = num1;
            }
            else{
                num1prod = 1;
            }
            if(num2%2 == 0){
                num2prod = num2;
            }
            else{
                num2prod = 1;
            }
            if(num3%2 == 0){
                num3prod = num3;
            }
            else{
                num3prod = 1;
            }
            int evenprod;
            evenprod=(num1prod*num2prod*num2prod);
            printf("El producto de los numeros pares es de %i", evenprod);
    }       

    float averageEvenPercentage(float num001, float num002, float num003){
            float prom=(num001+num002+num003)/3;
            int num1 = (int)num001;
            int num2 = (int)num002;
            int num3 = (int)num003;
            float num1percent;
            float num2percent;
            float num3percent;
            if(num1%2 == 0){
                num1percent = 33.33;
            }
            else{
                num1percent = 0;
            }
            if(num2%2 == 0){
                num2percent = 33.33;
            }
            else{
                num2percent = 0;
            }
            if(num3%2 == 0){
                num3percent = 33.33;
            }
            else{
                num3percent = 0;
            }
            float evenpercent=num1percent+num2percent+num3percent;
            printf("El promedio de los numeros ingresados es de %.2f y el porcentaje de numeros pares ingresados es de %.2f %", prom, evenpercent);
    }

    float biggerNumber(float num001, float num002, float num003){
            float maxnum;
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
    }

    float sumSquaresOddNumbers(float num001, float num002, float num003){
            int num1 = (int)num001;
            int num2 = (int)num002;
            int num3 = (int)num003;
            int oddsquare001;
            int oddsquare002;
            int oddsquare003;
            int oddsquaresum;
            if(num1%2 == 0){
                oddsquare001 = 0;
            }
            else{
                oddsquare001 = num1*num1;
            }
            if(num2%2 == 0){
                oddsquare002 = 0;
            }
            else{
                oddsquare002 = num2*num2;
            }
            if(num3%2 == 0){
                oddsquare003 = 0;
            }
            else{
                oddsquare003 = num3*num3;
            }
            oddsquaresum=oddsquare001+oddsquare002+oddsquare003;
            printf("La suma de los cuadrados de aquellos que sean impares es de %i", oddsquaresum);
    };

    switch(menuselected){
        case 1: productEvenNumbers(num001, num002, num003);
        break;
        case 2: averageEvenPercentage(num001, num002, num003);
        break;
        case 3: biggerNumber(num001, num002, num003);
        break;
        case 4: sumSquaresOddNumbers(num001, num002, num003);
        break;
        case 5: printf("Adiós!");
        break;
        default: printf("No ha ingresado un valor válido");
    }
}