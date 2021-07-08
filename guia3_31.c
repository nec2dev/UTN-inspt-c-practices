/*31. Se ingresan, para cada alumno de un curso, su número de legajo y 
las seis notas correspondientes a las materias rendidas en el año. Para 
finalizar, se ingresa el número de legajo 0. 
La computadora debe emitir los números de legajo de los tres alumnos con 
el mejor promedio. Si hay mas de tres alumnos con el mismo promedio 
máximo, debe emitir un mensaje.*/

#include <stdio.h>

int main (){

    int leg, leg1=0, leg2=0, leg3=0, note, i, cont=0;
    float prom, prom1=0, prom2=0, prom3=0, sum=0;
    
    printf("Ingrese el numero de legajo: \n");
    scanf("%d", &leg);

    while(leg!=0){
        for(i=1; i<=6; i++){
            printf("Ingrese la %d%c nota del alumno", i, 167);
            scanf("%d", &note);
            cont++;
            sum+=note;
        }
        prom=sum/cont;
        if(prom>prom1){
            prom1=prom;
            leg1=leg;
            if(prom>prom2){
                prom2=prom;
                leg2=leg;
                if(prom>prom3){
                    prom3=prom;
                    leg3=leg;
                }
            }
        }
        printf("Ingrese el numero de legajo: \n");
        scanf("%d", &leg);
    }

    printf("Los tres alumnos con el mejor promedio son: 1%c:leg: %d, 2%c:leg: %d, 3%c:leg: %d", 167, leg1, 167, leg2, 167, leg3);

    return 0;
}