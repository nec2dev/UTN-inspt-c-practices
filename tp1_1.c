/*1. En un circuito electrónico hay tres Interruptores los cuales 
pueden estar en estado cerrado o abierto (0). para que el circuito
funcione se requiere que al menos dos estén cerrados. Los estados 
de entrada son 1 o 0 para cada interruptor. Realizar un programa 
que indique cuando funcionara.*/  

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
     
    int switch001 = 0, switch002 = 0, switch003 = 0; 
    char desicion1, desicion2;

    printf("Buenas, el circuito está apagado, por favor encienda al menos dos interruptores.\n");
    printf("switch001: %i\n", switch001); 
    printf("switch002: %i\n", switch002); 
    printf("switch003: %i\n", switch003); 
    printf("Desea encender algún interruptor?, Ingrese S o N\n");
    scanf("%c", &desicion1);

    if(desicion1=='S'){
        switch001 = 1;
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito todavía no está funcionando, por favor encienda un interruptor mas.\n");  
        printf("Desea encender algún interruptor?, Ingrese S o N\n");
        scanf("%c", &desicion2); 
    
    if(desicion2=='S')
        switch002 = 1;
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito ya está funcionando."); 
    
    if(desicion1=='N'){
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito quedó apagdo."); 
    
    if(desicion2=='N')
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito quedó apagdo con un switch prendido."); 
    }
    else{
        printf("El circuitoquedó apagado");
        }
        }
        

};