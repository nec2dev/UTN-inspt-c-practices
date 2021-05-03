/*Una frutería ofrece las manzanas con descuento según la siguiente tabla:  

NUM. DE KILOS COMPRADOS  	% DESCUENTO  
0 – 2 	                    0% 
2.01 – 5 	                10% 
5.01 – 10 	                15% 
10.01 en adelante 	        20% 
    
Determina cuánto pagara una persona que compre X manzanas a un valor Y precio 
en esa frutería.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
     
    float kilos, precioinicial, preciofinal;
    precioinicial=250.00;
 
    printf("Oferta manzanas por dos kilos: $ 250,00\n");
    printf("Ingrese el valor que le di%c la balanza en kilos\n",162);
    scanf("%f", &kilos);
    
    if((kilos>2)&&(kilos<=5)){
        preciofinal = kilos*(250.00-(250.00*0.1));
        printf("El precio final es de: $ %.2f", preciofinal);
    }
    if((kilos>5)&&(kilos<=10)){
        preciofinal = kilos*(250.00-(250.00*0.15));
        printf("El precio final es de: $ %.2f", preciofinal);
    }
    if (kilos>10){
        preciofinal = kilos*(250.00-(250.00*0.2));
        printf("El precio final es de : $ %.2f", preciofinal);
    }
    if ((kilos>0)&&(kilos<=2)){
        printf("El precio final es de: $ %.2f", precioinicial);
    }
    else{
        printf("");
    } 
    
    return(0);
}