/*33. Se ingresa una lista de ternas (legajo, edad, sexo). El fin de los 
datos se indica ingresando el legajo == -1. La computadora debe indicar 
- si en la lista hay hombres de más de 90 años
- en caso afirmativo cuántos
- mostrar el legajo de la mujer más joven
- la edad promedio de los hombres */

#include <stdio.h>

int main (){

    int leg, age, flag=0, cont=0, contmen=0, summen=0, youngleg, youngage=1000;
    char sexo;

    printf("Por favor, ingrese el numero de legajo\n");
    scanf("%d", &leg);

    while(leg!=-1){
        printf("Ingrese la edad: \n");
        scanf("%d", &age);
        printf("Ingrese el sexo (m o f): \n");
        scanf("%c", &sexo);
        while(sexo!='m'||sexo!='f'){
            printf("Entrada no valida, ngrese el sexo (m o f): \n");
            scanf("%c", &sexo);
        }
        if(sexo='m'){
            
            contmen++;
            summen+=age;
            if(age>90){
                flag=1;
                cont++;
            }
        }
        if(sexo='f'&&age<youngage){
            youngage=age;
            youngleg=leg;
        }
        printf("Por favor, ingrese el numero de legajo\n");
        scanf("%d", &leg);
    }
    
    if(flag==1){
        printf("Se han ingresado %d hombres, %d tienen mas de 90 anios y la edad promedio de todos los hombres ingresados es de %.2f %\n", contmen, cont, summen/contmen);
    }else{
        printf("No se han ingresado hombres de mas de 90 anios\n");
    }
    printf("La mujer mas joven tiene como numero de legajo: %d", youngleg);

    return 0;
}
