/*30. Se ingresa un número no determinado de veces una terna formada por 
legajo (int),sexo (carácter m ó f), y edad. Se desea emitir 
- el legajo de la mujer más joven
- el legajo del varón más viejo
- el promedio de edades de quienes tengan nombre con inicial 'j' o ‘ J’.
*/

#include <stdio.h>

int main(){

    int leg=0, age, oldleg, youngleg, oldage=0, youngage=1000,  cont=0;
    char sexo, name;
    float sueldo, sum=0;
    
    printf("Ingrese el numero de legajo: \n");
    scanf("%d", &leg);

    while(leg!=-1){
        printf("Ingrese el nombre: \n");
        scanf("%c", &name);
        printf("Ingrese el sexo (m o f): \n");
        scanf("%c", &sexo);
        while(sexo!='m'||sexo!='f'){
            printf("Entrada no valida, ngrese el sexo (m o f): \n");
            scanf("%c", &sexo);
        }
        printf("Ingrese la edad: \n");
        scanf("%d", &age);
        
        if(age<youngage&&sexo=='f'){
            youngage=age;
            youngleg=leg;
        }
        if(age>oldage&&sexo=='m'){
            oldage=age;
            oldleg=leg;
        }
        if(name=='j'||name=='J'){
            cont++;
            sum+=age;
        }

        printf("Ingrese el numero de legajo: \n");
        scanf("%d", &leg);
    }
    
    printf("El legajo de la mujer mas joven: %d\n", youngleg);
    printf("El legajo del varon mas viejo: %d\n", sum/cont);
    printf("El promedio de edades de quienes tengan nombre con inicial 'j' o ‘ J’.: %.2f\n", sum/cont);

    return 0;
}