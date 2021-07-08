/*35. Se  lee un número no determinado de veces estos datos : legajo , 
edad (entero) , sueldo (real) ,sexo (carácter M o F ). El fin de datos 
se indica con  legajo == -1. Se quiere determinar: 
- promedio de edad de los hombres.                                  
- legajo de la mujer que cobre el mayor sueldo, y valor del sueldo                            
- cuántos juegos de datos fueron procesados.*/

#include <stdio.h>

int main (){

    int leg, age, cont=0, contmen=0, summen=0, legmax, contdata;
    float sueldo, sueldomax;
    char sexo;

    printf("Por favor, ingrese el numero de legajo\n");
    scanf("%d", &leg);

    while(leg!=-1){
        printf("Ingrese la edad: \n");
        scanf("%d", &age);
        printf("Ingrese el sueldo: \n");
        scanf("%f", &sueldo);
        printf("Ingrese el sexo (M o F): \n");
        scanf("%c", &sexo);
        while(sexo!='M'||sexo!='F'){
            printf("Entrada no valida, ngrese el sexo (m o f): \n");
            scanf("%c", &sexo);
        }
        if(sexo=='M'){
            contmen++;
            summen+=age;
        }
        if(sexo=='F'){
            if(sueldo>sueldomax){
            sueldomax=sueldo;
            legmax=leg;
        }
        }
        contdata++;
        printf("Por favor, ingrese el numero de legajo\n");
        scanf("%d", &leg);
    }
    
    printf("El promedio de edad de los hombres es: %.2f %", summen/contmen);
    printf("El legajo de la mujer con mayor sueldo, $ %.2f.-, es: %d", sueldomax, legmax);
    printf("Fueron procesados %d paquetes de datos", contdata);
    return 0;
}

