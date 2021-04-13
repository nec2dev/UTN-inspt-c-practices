/*20.Determina  la  hipotenusa  de  un  triángulo  rectángulo  conocidas
  las longitudes de sus dos catetos. Desarrolla los correspondientes 
  algoritmos. 
  Análisis:  En  el  ejercicio  se  puede  definir  como  tareas  las  
  tres  acciones solicitadas.  "Leer, Calcular y Escribir", 
  Lee cada uno de los valores de los dos catetos y almacenarlos en 
  cada uno de los identificadores definidos para el caso, calcularla 
  hipotenusa aplicando la fórmula correspondiente almacenando su   
  valor en el identificador del caso y escribir el valor encontrado 
  para la hipotenusa como respuesta.*/

#include <stdio.h>
#include <math.h>

int main() {

   float cateto_1, cateto_2, hipotenusa;
   
   printf("Por favor, Ingrese la longitud del primer cateto en cm.\n");
   scanf("%f", &cateto_1);

   printf("Ahora, ingrese la longitud del segundo cateto en cm.\n");
   scanf("%f", &cateto_2);

    hipotenusa = sqrt(pow(cateto_1, 2)+pow(cateto_2, 2));

    printf("la hipotenusa del triángulo mide %.2f cm.", hipotenusa);

   return 0;
};  

//Agregar métodos para que no se ingrese valores negativos