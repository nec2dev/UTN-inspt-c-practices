/*D10. Desarrolla un algoritmo que le permita leer tres valores A, B y C 
e indicar si uno de los tres divide a los otros dos exactamente. 
Análisis: Leídos los tres valores y almacenados en cada una de las 
variables A, B y C respectivamente se procede a verificar si cada uno 
de ellos divide exactamente a los otros dos. La división es exacta si 
el residuo de la división respectiva es igual a cero. */

#include <stdio.h>

int main() {
   float a,b,c,divisor;

	printf("Introduzca el primer numero: ");
	scanf("%f", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &b);
    printf("Introduzca el tercer numero: ");
	scanf("%f", &c);

    if (b%a==0 && c%a==0)
        divisor = a;
        printf("\n%.2f es divisor exacto de %.2f y de %.2f.", divisor, b,c);
    else
        if (a%b==0 && c%b==0)
        divisor = b;
        printf("\n%.2f es divisor exacto de %.2f y de %.2f.", divisor, a,c);
        else
            if (a%c==0 && b%c==0)
            divisor = c;
            printf("\n%.2f es divisor exacto de %.2f y de %.2f.", divisor, a,b);
        else
            printf("No se encontró ningun divisor exacto a los otros dos numeros ingresados");
    
   return 0;
};