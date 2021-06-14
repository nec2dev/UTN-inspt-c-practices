/*Se necesita procesar las ventas de los N empleados de un comercio. Para ello 
primero se ingresa el valor de N y luego N veces se lee un legajo, que es un  
valor entero positivo (debe validarse ese dato), y a continuación valores float 
que corresponden cada uno a una venta realizada por el empleado. El fin de ventas 
de cada empleado se indica con venta = -1.  Se pide: a) de cada empleado, emitir 
el promedio de ventas. b)Cuando se haya procesado todo el grupo de empleados, 
indicar cuál fue el mayor promedio de ventas obtenida por algún empleado (no importa 
qué empleado obtuvo ese promedio máximo, o si fue alcanzado por varios empleados) .*/

#include <stdio.h>

int main (){

    int n, cont=0;
    float ventas=0, aux, prom, maxprom;

    printf("Ingrese un numero entero para indicar la cantidad de empleados a evaluar: \n");
    scanf("%d", &n);

    while(n<0){
       printf("el numero debe ser positivo:\n");
       scanf("%f",&n);
    } 

    for (int i=1;i<=n;i++){
        
            while(ventas!=-1){
                printf("Ingrese las ventas del %d%c empleado, recuerde que para terminar debe ingresar -1:\n",i, 167); 
                scanf("%f", &ventas);
                aux=+ventas;
                cont++;
            }
            prom=ventas/cont;           
            printf("El promedio de ventas del %d%c empleado fue de: $ %.2f\n", i, 167, prom);

            if(maxprom<=prom)
            maxprom=prom;
    }
    printf("El promedio mayor de ventas fue de $ %.2f", maxprom);
    
    return 0;
}