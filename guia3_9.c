/*9. Dados el importe de una compra y el valor de un único 
billete o moneda suficiente para el pago, la computadora 
muestra la composición del vuelto que requiera menos 
billetes y monedas. Considerar billetes de 
100,50,20,10,5 y 2*/

#include <stdio.h>

int main (){
    float buyValue=798.5, pay=1000, returned;
    int bill100=100, bill50=50, bill20=20, bill5=5, bill2=2;
    int cont100=0, cont50=0, cont20=0, cont10=0, cont5=0, cont2=0;

    returned=pay-buyValue;

    cont100=returned/100;
    cont50=(returned%100)/50;
    cont20=returned/20;
    cont10=returned/10;
    cont5=returned/5;
    cont2=returned/2;

    printf("Su vuelto se compone de %i billetes de 100, %i billetes de 50, %i billetes de 20, %i billetes de 10, %i billetes de 5 y %i billetes de 2", cont100, cont50, cont20, cont10, cont5, cont2 );
    return 0;
}