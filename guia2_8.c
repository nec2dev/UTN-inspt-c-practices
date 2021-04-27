/*Desarrolla un algoritmo que le permita leer tres valores y almacenarlos 
en las variables A, B y C respectivamente.  El algoritmo debe indicar 
cuál es el mayor. Para este caso se asume que los tres valores leídos 
por el teclado son valores distintos. Análisis: Es necesario leer los 
tres valores a comparar, cada uno de ellos se almacena en una variable 
que para el ejercicio será A, B y C. Para saber si A es el valor mayor 
se compara con las variables B y C respectivamente. En caso de ser mayor 
se escribe el mensaje, en caso contrario se sigue verificando otra 
variable caso B y si no por defecto se dirá que C es el mayor asumiendo 
que los tres valores almacenados son diferentes.*/

#include <stdio.h>

int main() {

   float a,b,c;

	printf("Introduzca el primer numero: ");
	scanf("%f", &a);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &b);
    printf("Introduzca el tercer numero: ");
	scanf("%f", &c);

   if ( a>=b && a>=c )
        printf( "\n%.2f es el mayor.", a );
    else
        if (b>c)
            printf("\n%.2f es el mayor.", b);
        else
            printf("\n%.2f es el mayor.", c);
   return 0;
};