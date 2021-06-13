/* 17.Construye un programa que permita ingresar 2 tiempos, 
expresados en horas, minutos y segundos, el mismo debe emitir 
por pantalla la suma de ambos (también en horas, minutos y segundos).*/

#include <stdio.h>
int main() {

    int hora1, minuto1, segundo1, hora2, minuto2, segundo2;
   
   printf("Por favor, Ingrese la o las horas del primer tiempo\n");
   scanf("%f", &hora1);
   printf("Por favor, Ingrese el o los minutos del primer tiempo\n");
   scanf("%f", &minuto1);
   printf("Por favor, Ingrese el o los segundos del primer tiempo\n");
   scanf("%f", &segundo1);

   printf("Por favor, Ingrese la o las horas del segundo tiempo\n");
   scanf("%f", &hora2);
   printf("Por favor, Ingrese el o los minutos del segundo tiempo\n");
   scanf("%f", &minuto2);
   printf("Por favor, Ingrese el o los segundos del segundo tiempo\n");
   scanf("%f", &segundo2);

    int segundoauxiliar = segundo1 + segundo2;
    int segundoresto = segundoauxiliar % 60;                                             
    int minutoauxiliar = minuto1 + minuto2 + segundoauxiliar/60;
    int minutoresto = minutoauxiliar % 60;
    int horasresto = hora1 + hora2 + minutoauxiliar/60;
    
    printf("Resultado de la suma de los tiempos ingresados: \n");
    printf("%f horas %f minutos %f segundos", horasresto, minutoresto, segundoresto);
    return 0;

};