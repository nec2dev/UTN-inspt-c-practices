/*54.La expresión que es falsa si y sólo si un valor 
real x está en el intervalo abierto (3.0,4.0), 
sin incluir los extremos, es:*/

#include <stdio.h>

int main(){
     
    float x=3.5;

    if((x<=3.0)||(x>=4.0))
    printf("(x<=3.0)||(x>=4.0) es: Verdadero\n");
    else
    printf("(x<=3.0)||(x>=4.0) es: Falso\n");

    if(!(x<3.0)||(x>4.0))
    printf("!(x<3.0)||(x>4.0) es: Verdadero\n");
    else
    printf("!(x<3.0)||(x>4.0) es: Falso\n");

    if((x>=3.0||x<=4.0))
    printf("(x>=3.0||x<=4.0) es: Verdadero\n");
    else
    printf("(x>=3.0||x<=4.0) es: Falso\n");

    if(!(x<=3.0)&&!(x>=4.0))
    printf("!(x<=3.0)&&!(x>=4.0) es: Verdadero\n");
    else
    printf("!(x<=3.0)&&!(x>=4.0) es: Falso\n");

    if((x<3.0)||(x>4.0))
    printf("(x<3.0)||(x>4.0) es: Verdadero\n");
    else
    printf("(x<3.0)||(x>4.0) es: Falso\n");

    return(0);

    /*(x<3.0)||(x>4.0) da falso*/
}