/*14.Se desea ingresar por teclado un número no determinado de veces un 
legajo y un sueldo. El legajo es un valor entre 10000 y 20000 inclusive, 
y el sueldo un real positivo. Para la lectura del legajo se pide diseñar 
un afunción ‘Leer_y_Validar_Leg’ que cargue un legajo válido en la 
posición indicada (dirección de la variable que se quiere leer). 
Para la lectura del sueldo, se pide también validarlo con una función 
análoga ‘Leer_y_Validar_Suel’. Se desea el promedio de los sueldos leídos, 
y el primero y último de los legajos leídos. Escribir el programa (y 
funciones) que resuelvan el problema.*/

#include <stdio.h>
#include<stdlib.h>
//Función para validar legajo.
int Leer_y_Validar_Leg(int leg){
    if(leg>=10000&&leg<=20000){
        return 1;
    }else{
        return 0;
    }
}
//Función para validar Sueldo.
int Leer_y_Validar_Suel(int salary){
    if(salary>=0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    float salary, ;
    int leg, validleg, salarysum=0, salarycont=0, firstleg, lastleg;

    printf("Ingrese el nro. de legajo valido, para salir, ingrese -1:\n");
    scanf("%d", &leg);
    firstleg=leg;
    
    while(leg!=-1){

        validleg=Leer_y_Validar_Leg(leg);
        if(validleg==1){        
            lastleg=leg;
            printf("Ingrese el sueldo del empleado");
            scanf("%f", &salary);
            salarycont++;
            salarysum=salarysum+salary;
        }else{
            printf("No se ha ingresado un nro. de legajo valido.\n");
        }
        printf("Ingrese el nro. de legajo valido, para salir, ingrese -1:\n");
        scanf("%d", &leg); 
    }
    
    printf("El primer legajo leido fue el: %d", firstleg);
    printf("El ultimo legajo leido fue el: %d", lastleg);
    printf("El promedio de los sueldos leidos fue: %f", salarysum/salarycont);
    return(0);
    
}