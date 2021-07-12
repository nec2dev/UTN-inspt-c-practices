/*3.Escribir una función que no reciba dato y retorne un número aleatorio 
(al azar). Mostrar su uso desde main.*/

#include <stdio.h>
#include <stdlib.h>

int ganaraterandomnum(){
    int num=rand();
    return num;
}

int main(){

    int randomnum; 

    randomnum=ganaraterandomnum();
    printf("%d", randomnum);

    return 0;
}