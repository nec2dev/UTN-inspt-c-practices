#include <stdio.h>
int main() {

    float lado_1, lado_2;
   
   printf("Por favor, Ingrese la medida del primer lado del rectángulo\n");
   scanf("%f", &lado_1);
   printf("Ahora, ingrese la medida del segundo lado del rectángulo\n");
   scanf("%f", &lado_2);

   float perimetro = lado_1*2 + lado_2*2;

   float superficie= (lado_1*lado_2);

    printf("El perímetro del rectángulo es de %.2f", perimetro, "cm.\n");
    printf("La superficie del rectángulo es de %.2f", superficie, "cm.\n");

   return 0;
};