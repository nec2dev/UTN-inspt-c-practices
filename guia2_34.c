/*34.Ingrese tres números correspondientes a un conjunto 
y tres números correspondientes a otro conjunto. Emite 
por pantalla los números que corresponden a la intersección 
de los dos conjuntos.*/

#include <stdio.h>

int main(){
     
    float a1, a2, a3, b1, b2, b3;
 
    printf("Ingrese tres valores para el primer conjunto\n");
    scanf("%f %f %f", &a1, &a2, &a3);

    printf("Ahora, ingrese otros tres valores para el segundo conjunto\n");
    scanf("%f %f %f", &b1, &b2, &b3);
    
    if((a1||a2||a3)==(b1||b2||b3))
        printf("");    
    else
        printf("");

    return(0);
}