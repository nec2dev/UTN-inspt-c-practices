/*Durante el día, una farmacia ingresa los importes de sus ventas. 
Junto a cada importe, se ingresa una 'C', si la venta fue realizada 
con descuento por obra social, o una 'S', si la venta fue sin descuento. 
Al final del día, se ingresa una venta negativa. La computadora muestra 
el monto total de las ventas del día y el porcentaje de clientes que 
compraron con descuento.*/

#include <stdio.h>

int main(){

    float importe, sum=0, cont=0, contdesc=0;
    char tipo;

    printf("Ingrese el importe\n");
    scanf("%f", &importe);

    while(importe>=0){
        fflush(stdin);
        printf("C: Obra Social\nS: Particular\n");
        scanf("%c", &tipo);
        
        cont++;
        sum+=importe;
        if(tipo=='C'){
            contdesc++;
        }
        printf("Ingrese el importe\n");
        scanf("%f", &importe);
    }

    printf("Ventas totales: $ %.2f\n", sum);
    printf("Porcentaje de clientes que compraron con descuento: %.2f %", contdesc*100/cont);

    return(0);
}