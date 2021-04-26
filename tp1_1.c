/*1. En un circuito electrónico hay tres Interruptores los cuales 
pueden estar en estado cerrado o abierto (0). para que el circuito
funcione se requiere que al menos dos estén cerrados. Los estados 
de entrada son 1 o 0 para cada interruptor. Realizar un programa 
que indique cuando funcionara.*/  

#include <stdio.h>

int main(){
     
    char switch01 = 0, switch002 = 0, switch003 = 0, desicion, desicion2;

    printf("Buenas, el circuito está apagado, por favor encienda al menos dos interruptores.\n");
    printf("Desea encender algún interruptor?, Ingrese S o N\n");
    scanf("%c", &desicion);

    if(desicion == "N"){
        printf("Buenas, el circuito está apagado, por favor encienda al menos dos interruptores.\n");    
    if else(desicion == "S"){
         switch01 = 1;
         printf("El circuito no está funcionando, por favor encienda un interruptor mas.");  
         printf("Desea encender algún interruptor?, Ingrese S o N\n");
         scanf("%c", &desicion2); 
         if(desicion2 == "N"){
            printf("El circuito no está funcionando");    
         }else if(desicion2 == "S"){
          switch002= 1;
         }
    }else{
        printf("No ha ingresado un carácter válido.\n");  
    }

    rintf("El circuito no está funcionando, por favor encienda al menos dos interruptores.");

    
    
    printf("El circuito está funcionando correctamente, no apague ningún interruptor.");

    };