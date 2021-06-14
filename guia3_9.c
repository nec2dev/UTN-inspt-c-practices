/*9. Dados el importe de una compra y el valor de un único 
billete o moneda suficiente para el pago, la computadora 
muestra la composición del vuelto que requiera menos 
billetes y monedas. Considerar billetes de 
100,50,20,10,5 y 2*/

#include <stdio.h>

int main (){
    float buyValue=798.5, pay=1000, returned;
    int bill100=100, bill50=50, bill20=20, bill5=5, bill2=2;
    int contermino100=0, cont50=0, contermino20=0, contermino10=0, cont5=0, contermino2=0;

    returned=pay-buyValue;

    contermino100=returned/100;
    cont50=(returned%100)/50;
    contermino20=returned/20;
    contermino10=returned/10;
    cont5=returned/5;
    contermino2=returned/2;

    printf("Su vuelto se compone de %i billetes de 100, %i billetes de 50, %i billetes de 20, %i billetes de 10, %i billetes de 5 y %i billetes de 2", contermino100, cont50, contermino20, contermino10, cont5, contermino2 );
    return 0;
}