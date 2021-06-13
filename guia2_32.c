/*32.En un almacén se rebaja 20% del precio al cliente 
si el valor a pagarse es mayor a $200. Dado un valor, 
muestre lo que debe pagar el cliente.*/

#include <stdio.h>

int main (){
    
     float preciocompra, preciofinal;

     printf("Ingrese el valor de la compra: \n");
     scanf("%f", &preciocompra);

     if(preciocompra>=200){
     preciofinal=preciocompra-(preciocompra*0.2);
     printf("El valor de la compra final es $ %c: \n", preciofinal);
     }else
     printf("El valor de la compra final es $ %c: \n", preciocompra);

     return 0;
};
