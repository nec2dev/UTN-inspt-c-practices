/*Se ingresan los siguientes datos del personal de una fábrica: legajo (valores validos entre  
1200 y 4000), edad y genero (F/M/O). Se ingresa por cada empleado un número de sueldos  
correspondiente a tres sectores donde realizan tareas distintas. Alguno de ellos puede ser  
cero, lo que significa que no realizan tareas en ese sector. El número de empleados no se  
conoce. El ingreso de datos finaliza con legajo -1. A partir de estos datos, se pide informar  
por pantalla: 
    Validar que el legajo este entre 1200 y 4000 
    Cantidad de empleados 
    Porcentaje de personal ‘F’ y ‘M’ 
    Promedio de edad de los empleados 
    El número de legajo del empleado de sexo masculino de mayor edad. 
Implementar las funciones que permitan resolver los ítems anteriores. Determine qué tipo de 
funciones utilizar adecuadamente. */

#include <stdio.h>

int main(){

    float salary, salarysec1, salarysec2, salarysec3, promage, fperc, mperc;
    int leg=0, age, sector, emplcont=0, agesum=0, auxage=0, auxleg, fcont=0, mcont=0;
    char gen;

    while(leg!=-1){
        printf("Ingrese el nro. de legajo:\n");
        scanf("%d", &leg);
        if(leg>=1200&&leg<=4000){
            emplcont++;
            printf("Ingrese la edad del empleado:\n");
            scanf("%d", &age);
            agesum+=age;
            printf("Ingrese el genero del empleado (M/F/O)\n");
            fflush(stdin);
            scanf("%c", &gen);
            if(gen=='f')
                    fcont++;
            if(gen=='m'){
                mcont++;
                if(age>auxage){
                auxage=age;
                auxleg=leg;
                }
            }
            printf("Ingrese el salario percibido en el sector 1");
            scanf("%f", &salarysec1);
            printf("Ingrese el salario percibido en el sector 2");
            scanf("%f", &salarysec2);
            printf("Ingrese el salario percibido en el sector 3");
            scanf("%f", &salarysec3);
            printf("El registro se ha ingresado correctamente");
        }else{
            printf("No se ha ingresado un nro. de legajo valido.\n");
        }
    }
    salary=salarysec1+salarysec2+salarysec3;
    fperc=(fcont*100)/emplcont;
    mperc=(mcont*100)/emplcont;
    promage=agesum/emplcont;
    printf("Usted ha salido del programa.\n");
    printf("La cantidad de empleados ingredados fue de: %d\n", emplcont);
    printf("El porcentaje de empleadas de genero femenino fue de: %.2f\n", fperc);
    printf("El porcentaje de empleados de genero masculino fue de: %.2f\n", mperc);
    printf("El promedio de edad de los empleados fue de: %.2f\n", promage);
    printf("El nro. de legajo del empleado de sexo masculino de mayor edad fue de: %d\n", auxleg);
    return(0);
}