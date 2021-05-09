/*15. Según las reglas de precedencia para los operadores lógicos, 
¿cuál es el valor de cada una de las condiciones siguientes?
a) Verdadero o Falso y Falso 
b) No verdadero y Falso 
c) No falso y Falso o Verdadero */

#include <stdio.h>
#include <stdbool.h>

int main(){

    bool conditionFalse = false, conditionTrue = true;

    bool conditionA = conditionTrue||conditionFalse&&conditionFalse;
    bool conditionB = !conditionTrue&&conditionFalse;
    bool conditionC = !conditionFalse&&!conditionTrue;

    printf("a) Verdadero o Falso y Falso es: %s\n", conditionA ? "true" : "false");
    printf("b) No verdadero y Falso es: %s\n", conditionB ? "true" : "false");
    printf("c) No falso y Falso o Verdadero es: %s\n", conditionC ? "true" : "false");

    return 0;
}