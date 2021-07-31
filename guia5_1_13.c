/*13.Escribir una función que reciba un puntero a un int y triplique 
el valor contenido en esa dirección*/

#include<stdio.h>

int triplevalue(int * dirx){
    *dirx=3*(*dirx);
    printf("%d", (dirx));
}
 
int main(){
    int x;
    printf("Ingrese un valor para x: \n");
    scanf("%d", &x);
    printf("%d", triplevalue(&x));
    return(0);
}