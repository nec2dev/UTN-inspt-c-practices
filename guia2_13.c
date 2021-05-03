/*13. Suponiendo que y = 5 y x = 1, cuando se ejecutan las siguientes 
instrucciones; ¿cuál será la salida?*/

#include <stdio.h>

int main() {
   int x=1,y=5;

    if(!((x < 2) && (y < 6)))
    printf("a) Si"); 

    else 
    printf ("a) No"); 

    if(! ((x > 1) && (y > 3)) 
    printf("b) Si"); 

    else 
    printf("b) No"); 
};