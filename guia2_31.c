/*31.Construye un programa para un comerciante cuyo 
cliente compra un artículo a un precio dado. Determina 
el precio al cual debe venderlo si desea ganar el 15% 
sobre el costo del artículo.*/
#include <stdio.h>

int main (){
    
     float precioart, preciofinal;

     printf("Ingrese el precio del art%cculo: \n", 161);
     scanf("%f", &precioart);

     preciofinal=precioart+(precioart*0.15);
     printf("El precio final del art%cculo es de $ %c: \n", 161, preciofinal);

     return 0;
};
