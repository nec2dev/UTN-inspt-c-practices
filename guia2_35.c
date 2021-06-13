/*35.Dadas las 4 nums obtenidas por un alumno, calcula 
e informa por pantalla su promedio e informa con una 
leyenda si está aprobado o no. La condición de aprobación
es obtener un promedio mayor o igual que 4.*/

#include <stdio.h>

int main(){
     
    float num1, num2, num3, num4, prom;
 
    printf("Ingrese tres valores para el primer conjunto\n");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    prom=(num1+num2+num3+num4)/4
    
    if(prom>=4)
        printf("Aprobado");    
    else
        printf("Desaprobado");

    return(0);
}