/*Se ingresa un número natural N, seguido de N real. 
Se emite el promedio de los números positivos, el promedio 
de los números negativos y la cantidad de ceros.*/

#include <stdio.h>

int main (){
    int cantreal, cantceros=0, cantpos=0, cantneg=0, sumapos=0, sumaneg=0, ceros;
    float real, prompos, promneg;
    
    //int numnat;
    // printf("ingrese un numero natural:\n");
    // scanf("%d", &numnat);

    // while(numnat<=0){
    //    printf("el numero debe ser natural:\n");
    //    scanf("%d",&numnat);
    // }   

    printf("ingrese la cantidad de numeros reales a ingresar:\n");
    scanf("%d", &cantreal);

    for(int i=1;i<=cantreal;++i){
       printf("Ingrese el %d%c numero real:\n",i, 167); 
       scanf("%f", &real);

        if(real>0){
            cantpos++;
            sumapos=+real;
        }  
        if(real<0){
            cantneg++;
            sumaneg=+real;
        }
        if(real==0){
            cantceros++;    
        }
    }
    promneg=sumaneg/cantneg;
    prompos=sumapos/cantpos;
    ceros=cantceros;
    printf("El promedio de los numero positivos ingresados es: %f\n", prompos);
    printf("El promedio de los numero negativos ingresados es: %f\n", promneg);
    printf("La cantidad de ceros fue: %d\n", ceros);

    return 0;
}