/*15. Se leen N números enteros y se emite el mayor y la 
posición en la que ingresó por primera vez*/

#include <stdio.h>

int main (){

    int cantent, entero, posicion, mayor;
    
    printf("ingrese la cantidad de numeros enteros a ingresar:\n");
    scanf("%d", &cantent);

    for(int i=1;i<=cantent;i++){
       printf("Ingrese el %d%c numero entero:\n",i, 167); 
       scanf("%d", &entero);

       if(entero>mayor){
       mayor=entero; 
       posicion=i;
       }
    };

    printf("El numero mayor ingresado fue el %d y se ingreso en la %d%c posicion", mayor, posicion, 167);

    return 0;
}