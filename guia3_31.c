/*31. Se ingresan, para cada alumno de un curso, su número de legajo y 
las seis notas correspondientes a las materias rendidas en el año. Para 
finalizar, se ingresa el número de legajo 0. 
La computadora debe emitir los números de legajo de los tres alumnos con 
el mejor promedio. Si hay mas de tres alumnos con el mismo promedio 
máximo, debe emitir un mensaje.*/

#include <stdio.h>

int main (){

    int leg, leg1, leg2, leg3, note, i, cont=0;
    float prom, prom1, prom2, prom3, sum=0;
    
    printf("Ingrese el numero de legajo: \n");
    scanf("%d", &leg);

    while(leg!=0){
        for(i=1; i>=6; i++){
            printf("Ingrese la %d° nota del alumno");
            scanf("%d", &note);
            cont++;
            sum+=note;
        }
        prom=sum/cont;
        if(prom>prom3){
            prom3=prom;
            leg3=leg;
            if(prom>prom2){
                prom2=prom;
                leg2=leg;
                if(prom>prom1){
                    prom1=prom;
                    leg1=leg;
                }
            }
        }
    }

    return 0;
}