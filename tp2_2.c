/*2)Se ingresa un número no determinado de veces un legajo, una edad 
(valor entero) y un sueldo (float).  El fin de datos se indica con edad 
-1, y en ese caso no se ingresa ni edad ni sueldo. Se necesita emitir 
esta información: cuántas personas tiene edades, entre 20 y 50, se han 
leído, y el sueldo promedio de los que tengan más de 30 años. 
Validar el legajo de manera de que el valor ingresado sea entre 1000 y 
2300 de tal manera que el usuario ingrese un valor correcto.*/

#include <stdio.h>

int main(){

    int numFile=1001, age=1, contage=0, contsalary=0;
    float salary, sumsalary, promsalary;
    
    do{
        printf("Ingrese el n%cmero de legajo\n",163);
        scanf("%i", &numFile);
        if(numFile>=1000&&numFile<=2300){
            printf("Ingrese la edad de la persona\n");
            scanf("%i", &age);
            printf("Ingrese el sueldo de la persona\n");
            scanf("%f", &salary);

            if(age>=20&&age<=50){
            contage++;
            };
            if(age>=30){
            contsalary++;
            sumsalary=+salary;
            };
        }else{
        printf("El número de legajo no está permitido, ingrese un legajo numerado entre 1000 y 2300\n");
    }
    }while(age!=-1);
    
    promsalary=sumsalary/(float)contsalary;

    printf("Se han ingresado %i personas con edades de entre 20 y 30 a%cos\n", contage, 164);
    printf("El sueldo promedio de los que tienen m%cs de 30 a%cos es de: $ %.2f\n", 160, 164, promsalary);

    return 0;
}