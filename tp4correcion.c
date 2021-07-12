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
#include<stdlib.h>
//Función Validar que el legajo este entre 1200 y 4000 
int validateleg(int leg){
    if(leg>=1200&&leg<=4000){
        return 1;
    }else{
        return 0;
    }
}
//Función Cantidad de empleados 
int totalemplo(int const emplocont){
    return emplocont;
}
//Función Porcentaje de personal ‘F’ y ‘M’ 
float genderpercent(int const gendrecont, int const emplocont){
    float gendreperc=(gendrecont*100)/emplocont;
    return gendreperc;
}
//Función Promedio de edad de los empleados 
float averageemplo(int const agesum, int const emplocont){
    float promage=agesum/emplocont;
    return promage;
}
//Función El número de legajo del empleado de sexo masculino de mayor edad
int bestsalarymanleg(int const leg, int const age, char gen){
        int auxage=0, auxleg=0;
        if(gen=='m'){
            if(age>auxage){
            auxage=age;
            auxleg=leg;
            }
        }
        return auxleg;
}

int main(){

    float salary, salarysec1, salarysec2, salarysec3;
    int leg, age, validleg, auxleg=0, sector, emplocont=0, agesum=0, fcont=0, mcont=0, gendrecont=0;
    char gen;

    printf("Ingrese el nro. de legajo, para salir, ingrese -1:\n");
    scanf("%d", &leg);
    while(leg!=-1){

        validleg=validateleg(leg);
        if(validleg==1){
        
            printf("Ingrese la edad del empleado:\n");
            scanf("%d", &age);
            agesum+=age;
            printf("Ingrese el genero del empleado (m/f/o)\n");
            fflush(stdin);
            scanf("%c", &gen);

            emplocont++;
            if(gen=='f')
                fcont++;
            if(gen=='m')
                mcont++;
            auxleg=bestsalarymanleg(leg, age, gen);

            /*printf("Ingrese el salario percibido en el sector 1\n");
            scanf("%f", &salarysec1);
            printf("Ingrese el salario percibido en el sector 2\n");
            scanf("%f", &salarysec2);
            printf("Ingrese el salario percibido en el sector 3\n");
            scanf("%f", &salarysec3);
            printf("El registro se ha ingresado correctamente\n");*/

        }else{
            printf("No se ha ingresado un nro. de legajo valido.\n");
        }
        printf("Ingrese el nro. de legajo, para salir, ingrese -1:\n");
        scanf("%d", &leg); 
    }
        
    //salary=salarysec1+salarysec2+salarysec3;
    
    printf("Usted ha salido del programa.\n");
    printf("La cantidad de empleados ingresados fue de: %d\n", totalemplo(emplocont));
    printf("El porcentaje de empleadas de genero femenino fue de: %.2f\n", genderpercent(fcont, emplocont));
    printf("El porcentaje de empleados de genero masculino fue de: %.2f\n", genderpercent(mcont, emplocont));
    printf("El promedio de edad de los empleados fue de: %.2f\n", averageemplo(agesum, emplocont));
    printf("El nro. de legajo del empleado de sexo masculino de mayor edad fue de: %d\n", auxleg);
    return(0);
    
}