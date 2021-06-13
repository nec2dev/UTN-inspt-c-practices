/*26.Desarrolla un algoritmo que le permita leer un valor 
cualquiera N y escribir si dicho número es común múltiplo 
de M y P. M y P también se deben leer desde el teclado. 
Análisis: Para dar solución, primero se deben leer los 
valores. En N se almacena un valor y en las variables M 
y P se almacenarán los otros dos valores de los cuales 
se desea saber si N es común múltiplo o no. Para poder 
saber si N es múltiplo habrá que realizar una división 
y preguntar si dicha división es exacta o no, con cada 
uno de los dos valores (N/M y N/P). Si cada división es 
exacta entonces escribir que N es común múltiplo de M y 
P o en caso contrario decir que N no es común múltiplo.*/

#include <stdio.h>

int main (){
    
     int n, m, p;

     printf("Ingrese un n%cmero cualquiera: \n", 163);
     scanf("%d", &n);

     printf("Ahora ingrese un n%cmero para saber si el anterior es com%cn m%cltiplo: \n", 163, 163, 163);
     scanf("%d", &m);

     printf("Ahora ingrese otro n%cmero para saber si tambien es com%cn m%cltiplo del primero: \n", 163, 163, 163);
     scanf("%d", &p);

     if(n%m==0&&n%p==0){
         printf("%d es com%cn m%cltiplo de %d y %d", n, 163, m, p);
     }
     else
     printf("%d no es com%cn divisor entre %d y %d", n, 163, m, p);

     return 0;
};