/*Escribir un programa que cargue un array de 
10 posiciones, con float Luego, mostrar el array*/

#include <stdio.h>

int main()
{
 const int tam=6;
 int v[tam], i, ac=0;


 printf("Se cargara el vector:\n");

 for(i=0;i<tam;i++)
 {

     printf("\nIngresar valor posición %d: ", i);
     scanf("%d", &v[i]);

 }

printf("\n Se emitirá el vector \n");

for(i=0;i<tam;i++)
 {

     printf("\nEl valor de posición %d: es %d ", i, v[i]);


 }


 for(i=0;i<tam;i++)
 {

     ac=ac+v[i];

 }

 printf("\n La sumatoria de los valores de v es %d", ac);

 return 0;
 }