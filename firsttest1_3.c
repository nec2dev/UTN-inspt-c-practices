/*Escribir un programa que realice cada una de las siguientes acciones:
1)	Declarar m y n variables enteras inicializadas en 5 y 10 respectivamente, y p, q variables puntero a entero.
2)	Asignar a p la dirección de n y a q la dirección de m.
3)	Asignar m   la variable a el valor 90 usando el puntero q. 
4)	Mostrar el valor de m, la dirección de m, el valor de q, la dirección de q y el valor contenido en la dirección almacenada en q.
5)	Almacenar en la dirección contenida en p el contenido de la dirección contenida en q
6)	Asignar a q la dirección contenida en p
*/
#include <stdio.h>

int main (){

    //1)	Declarar m y n variables enteras inicializadas en 5 y 10 respectivamente, y p, q variables puntero a entero.
    int m=5, n=10, *p, *q;

    //2)	Asignar a p la dirección de n y a q la dirección de m.
    p=&n;
    q=&m;

    //3) Asignar m   la variable a el valor 90 usando el puntero q. 
    p=&q;
    
    return 0;
}