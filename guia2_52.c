/*52.Un número entero se dice que es elemental si es 
divisible por 3 ó 5 pero no lo es por 4. Una expresión 
lógica que devuelva cierto si un número entero i es 
elemental es:*/

#include <stdio.h>

int main(){
     
    int i=15;

    if((i%3==0||i%5==0)&&(i%4!=0))
    printf("(i%3==0||i%5==0)&&(i%4!=0) es una expresión para calcular un i elemental\n");
    else
    printf("(i%3==0||i%5==0)&&(i%4!=0) no es una expresión para calcular un i elemental\n");

    if((i%3==0||i%5==0)&&!(i%4!=0))
    printf("(i%3==0||i%5==0)&&!(i%4!=0) es una expresión para calcular un i elemental\n");
    else
    printf("(i%3==0||i%5==0)&&!(i%4!=0) no es una expresión para calcular un i elemental\n");

    if((i%3==0||i%5==0)&&(i%4==0))
    printf("(i%3==0||i%5==0)&&(i%40==0) es una expresión para calcular un i elemental\n");
    else
    printf("(i%3==0||i%5==0)&&(i%4==0) no es una expresión para calcular un i elemental\n");

    if((i%3==0||i%5==0)||(i%4!=0))
    printf("(i%3==0||i%5==0)||!(i%4!=0) es una expresión para calcular un i elemental\n");
    else
    printf("(i%3==0||i%5==0)||!(i%4!=0) no es una expresión para calcular un i elemental\n");

    if((i%3==0||i%5==0)||(i%4!=0))
    printf("(i%3==0||i%5==0)||(i%4!=0) es una expresión para calcular un i elemental\n");
    else
    printf("(i%3==0||i%5==0)||(i%4!=0) no es una expresión para calcular un i elemental\n");

    return(0);

}