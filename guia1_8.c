/* 8.Desarrolla un algoritmo que permita leer 2 valores y emitir 
por pantalla la suma de los dos, la resta, producto, división, 
promedio y el doble producto del primero menos la mitad del segundo. 
Análisis: Para dar solución a este ejercicio es necesario leer los 
valores que para el caso concreto del ejemplo son dos, calcular la 
operaciones con dichos valores y por último escribir el resultado. 
Los cálculos se realizarán y los valores serán almacenados en las 
variables correspondientes, por último se emitirán en la pantalla.*/
#include <stdio.h>
int main() {

    float valor_1, valor_2, resultsuma, resultresta, resultproducto, resultdivision, promedio, result;
   
   printf("Hola! Ingresá un valor");
   scanf("%f", &valor_1);
   printf("Ahora, ingresá otro valor");
   scanf("%f", &valor_2);

   resultsuma = valor_1+valor_2;
   resultresta = valor_1-valor_2;
   resultproducto = valor_1*valor_2;
   resultdivision = valor_1/valor_2;
   promedio = (valor_1+valor_2)/2;
   result = 2*(valor_1-valor_2/2);

   printf("La suma de %.2f mas %.2f es igual a: %.2f\n", valor_1,valor_2, resultsuma);
   printf("La resta de %.2f menos %.2f es igual a: %.2f\n", valor_1,valor_2, resultresta);
   printf("El producto de %.2f por %.2f es igual a: %.2f\n", valor_1,valor_2, resultproducto);
   printf("La división entre %.4f y %.4f es igual a: %.4f\n", valor_1,valor_2, resultdivision);
   printf("El promedio entre %.2f y %.2f es igual a: %.2f\n", valor_1,valor_2, promedio);
   printf("El doble producto del primero menos la mitad del segundo es igual a: %.3f\n", result);


   return 0;
};

