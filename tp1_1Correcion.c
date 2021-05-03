/*1. En un circuito electrónico hay tres Interruptores los cuales 
pueden estar en estado cerrado o abierto (0). para que el circuito
funcione se requiere que al menos dos estén cerrados. Los estados 
de entrada son 1 o 0 para cada interruptor. Realizar un programa 
que indique cuando funcionara.*/  

#include <stdio.h>

int main(){
     
    int switch001 = 0, switch002 = 1, switch003 = 1;     

    if ((switch001 == 1 && switch002 == 1)||(switch002 == 1 && switch003 == 1)||(switch001 == 1 && switch002 == 1)){
        printf("El circuito esta funcionando\n");
    }
    else{
       printf("El circuito no esta funcionando\n"); 
    }
    return(0);
}