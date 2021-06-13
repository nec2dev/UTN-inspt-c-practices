/*38.De una prueba de nivel realizada a un alumno se 
conoce la cantidad total de preguntas realizadas y la 
cantidad de respuestas correctas. Construye un programa 
que informe el nivel  registrado de acuerdo a la siguiente escala :  

Nota  	                    Porcentaje  
Excelente	                100
Muy bueno	                Entre 91 y 99
Bueno	                    Entre 61 y 90
Regular	                    Entre 40 y 60
Malo	                    Menor que 40*/

#include <stdio.h>
#include <stdlib.h>

int main(){
     
    int cantpreg, cantrespok;
    float nota;
 
    printf("Ingrese la cantidad de preguntas de la evaluacion\n");
    scanf("%d", &cantpreg);

    printf("Ingrese la cantidad de respuestas correctas\n");
    scanf("%d", &cantrespok);

    nota=cantrespok*100/cantpreg;
    
    if(nota==100)
    printf("Excelente");
    if(nota>=90&&nota<100)
    printf("Muy bueno");
    if(nota>=60&&nota<90)
    printf("Bueno");
    if(nota>=40&&nota<60)
    printf("Regular");
    if(nota<40)
    printf("Malo");

    return(0);
}