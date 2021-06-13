/*43.Construye un programa que solicite la primera letra 
de los días de la semana y emita por pantalla el nombre 
completo de ese día. En el caso de los días martes y 
miércoles, se debe pedir la segunda letra para emitir.*/

#include <stdio.h>

int main(){
    
    char weekday;

    printf("Ingrese la letra correspondiente en el menu para imprimir el dia de la semana\n");
    printf("Lunes: l\n");
    printf("Martes: a\n");
    printf("Miercoles: i\n");
    printf("Jueves: j\n");
    printf("Viernes: v\n");
    printf("Sabado: s\n");
    printf("Domingo: d\n");
    scanf("%c", &weekday);

    if(weekday=='l')
    printf("Lunes");
    if(weekday=='a')
    printf("Martes");
    if(weekday=='i')
    printf("Miercoles");
    if(weekday=='j')
    printf("Jueves");
    if(weekday=='v')
    printf("Viernes");
    if(weekday=='s')
    printf("Sabado");
    if(weekday=='d')
    printf("Domingo");

    return(0);
}