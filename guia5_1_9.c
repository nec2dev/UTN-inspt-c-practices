/*9.Hacer un programa que obtenga la distancia entre dos puntos que se 
encuentran en el plano usando funciones. (usar teorema de Pitágoras)*/

#include<stdio.h>
#include <math.h>

float ModuleTwoPoint(int *A, int *B){
    int AB[2];
    AB[0]=B[0]-A[0];
    AB[1]=B[1]-A[1];
    //printf("%d,%d\n", AB[0], AB[1]);
    float mod=sqrt(pow(AB[0], 2)+pow(AB[1], 2));
    return mod;
}
 
int main(){

    int A[2], B[2];
    
    printf("Ingrese la coordenada en x del punto A\n");
    scanf("%d", &A[0]);
    printf("Ingrese la coordenada en y del punto A\n");
    scanf("%d", &A[1]);
    printf("Ingrese la coordenada en x del punto B\n");
    scanf("%d", &B[0]);
    printf("Ingrese la coordenada en y del punto B\n");
    scanf("%d", &B[1]);

    printf("La distancia entre los puntos A y B es: %.2f", ModuleTwoPoint(A, B));

    return 0;
    
}