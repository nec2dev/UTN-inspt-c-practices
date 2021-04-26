/*Una frutería ofrece las manzanas con descuento según la siguiente tabla:  

NUM. DE KILOS COMPRADOS  	% DESCUENTO  
0 – 2 	                    0% 
2.01 – 5 	                10% 
5.01 – 10 	                15% 
10.01 en adelante 	        20% 
    
Determina cuánto pagara una persona que compre X manzanas a un valor Y precio 
en esa frutería.*/


#include <stdio.h>

int main(){
     
    float kilos, preciofinal;
 
    printf("Ingrese el valor que le di%c la balanza en kilos\n",162);
    printf("Oferta manzanas por dos kilos: $ 250,00\n");
    scanf("%f", &kilos);
    
    if (kilos>2 && kilos<=5){
        preciofinal = 250-(250*01);
        printf("El precio final es de: %f", preciofinal);

    // if (kilos>5 && kilos<=10){
    //     preciofinal = 250-(250*05);
    //     printf("El precio final es de: %f", preciofinal);

    // if (kilos>10){
    //     preciofinal = 250-(250*02);
    //     printf("El precio final es de: %f", preciofinal);
    }
    else{
        printf("El precio final es de: %f", preciofinal);
    // }
    // }
    }
}
