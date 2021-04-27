/*10. Desarrolla un algoritmo que le permita leer tres valores A, B y C 
e indicar si uno de los tres divide a los otros dos exactamente. 
Análisis: Leídos los tres valores y almacenados en cada una de las 
variables A, B y C respectivamente se procede a verificar si cada uno 
de ellos divide exactamente a los otros dos. La división es exacta si 
el residuo de la división respectiva es igual a cero. */

#include <stdio.h>

int main() {
   int a,b,c;

	printf("Introduzca el primer numero: ");
	scanf("%i", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%i", &b);
    printf("Introduzca el tercer numero: ");
	scanf("%i", &c);

    if (b%a==0 && c%a==0){
    printf("\n%i es divisor exacto de %i y de %i.", a, b,c);
    }
        if (a%b==0 && c%b==0){
        printf("\n%i es divisor exacto de %i y de %i.", b, a,c);
        }
            if (a%c==0 && b%c==0){
            printf("\n%i es divisor exacto de %i y de %i.", c, a,b);
            }
        else{
            printf("No se encontró ningun divisor exacto a los otros dos numeros ingresados");
            }
    
    return 0;

};