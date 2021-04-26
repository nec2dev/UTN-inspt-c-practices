/*1. En un circuito electrónico hay tres Interruptores los cuales 
pueden estar en estado cerrado o abierto (0). para que el circuito
funcione se requiere que al menos dos estén cerrados. Los estados 
de entrada son 1 o 0 para cada interruptor. Realizar un programa 
que indique cuando funcionara.*/  

#include <stdio.h>

int main(){
     
    int switch001 = 0, switch002 = 0, switch003 = 0; 
    char desicion1, desicion2;

    printf("Buenas, el circuito está apagado, por favor encienda al menos dos interruptores.\n");
    printf("switch001: %i\n", switch001); 
    printf("switch002: %i\n", switch002); 
    printf("switch003: %i\n", switch003); 
    printf("Desea encender alg%cn interruptor?, Ingrese S o N\n",163);
    fflush(stdin);
    scanf("%c", &desicion1);
    

    if (desicion1 =='S'){
        switch001 = 1;
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito todav%ca no est%c funcionando, por favor encienda un interruptor m%cs.\n", 161, 160, 160);  
        printf("Desea encender alg%cn otro interruptor?, Ingrese S o N\n", 163);
        fflush(stdin);
        scanf("%c", &desicion2);

    }else if(desicion1 =='N'){
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito qued%c apagdo.", 162);
    }

    else{
        printf("No se ingres%c un caracter valido.", 162);
    }

    if(desicion2=='S'){
        switch002 = 1;
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito ya est%c funcionando.", 160); 
    
    }else if(desicion2 =='N'){
        printf("switch001: %i\n", switch001); 
        printf("switch002: %i\n", switch002); 
        printf("switch003: %i\n", switch003); 
        printf("El circuito qued%c apagdo con un switch prendido.", 162); 
    }
    
}