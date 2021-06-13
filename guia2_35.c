/*35.Dadas las 4 notas obtenidas por un alumno, calcula 
e informa por pantalla su promedio e informa con una 
leyenda si está aprobado o no. La condición de aprobación
es obtener un promedio mayor o igual que 4.*/

#include <stdio.h>

int main(){
     
    float nota1, nota2, nota3, nota4, prom;
 
    printf("Ingrese tres valores para el primer conjunto\n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    prom=(nota1+nota2+nota3+nota4)/4
    
    if(prom>=4)
        printf("Aprobado");    
    else
        printf("Desaprobado");

    return(0);
}