/*32. Se ingresa una lista de pares ordenados (numero de socio, edad). 
El último es ('*', 0). La computadora debe indicar cuántas personas 
tienen más de 18 años y menos de 65, el numero de socio del mayor y  
del menor.*/

#include <stdio.h>

int main (){

    int age, youngage, oldage, cont=0;
    int num, youngnum, oldnum;

    printf("Por favor, ingrese el numero de socio y la edad, para salir ingrese '*'y 0\n");
    scanf("%d %d", &num, &age);

    while(num!= && age!=0){
        if(age<youngage){
            youngage=age;
            youngnum=num;
        }
        if(age>oldage){
            oldage=age;
            oldnum=num;
        }
        if(age>=18&&age<=65){
            cont++;
        }
        printf("Por favor, ingrese el numero de socio y la edad, para salir ingrese '*'y 0\n");
        scanf("%d %d", &num, &age);
    }
    
    printf("Se han ingresado %d personas entre 18 y 65 anios", cont);
    printf("El numero de socio del mas viejo es: %d", oldnum);
    printf("El numero de socio del mas joven es: %d", youngnum);

    return 0;
}