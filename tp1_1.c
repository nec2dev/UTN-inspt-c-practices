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
    toupper(desicion1);

    if(desicion1=='N' || desicion1=='S')
        printf(""),
    else
        printf("No ha ingresado un carácter válido.\n")

    if(desicion1=='N')
        printf("Buenas, el circuito está apagado.\n");  
        exit(-1);
        if(desicion1=='S')
            switch001 = 1;
            printf("switch001: %i\n", switch001); 
            printf("switch002: %i\n", switch002); 
            printf("switch003: %i\n", switch003); 
            printf("El circuito no está funcionando, por favor encienda un interruptor mas.");  
            printf("Desea encender algún interruptor?, Ingrese S o N\n");
            scanf("%c", &desicion2); 
                if(desicion2=='N')
                    printf("El circuito no está funcionando.");    
                else(desicion2=='S');
                switch002 = 1;
                printf("switch001: %i\n", switch001); 
                printf("switch002: %i\n", switch002); 
                printf("switch003: %i\n", switch003); 
                printf("El circuito ya está funcionando."); 

    return 0;
            
    // else
    //     ;  
    
};