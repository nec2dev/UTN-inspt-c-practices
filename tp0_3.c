// 3) Indicar qué valor se almacena en cada variable de la izquierda de cada asignación, siendo: int   a, b, c, d =0, e=1;
// recordar que en c, 0  corresponde a falso. int a=2, b=3, c;
// a)   a= 5>3;
// b)   b=( (4<5) && (2>2));
// c)   a=!b;
// d)   c= ((a%2 ==0) || (a-b <10));
// e)   c= (d && e);
// f)   c=(d || e);
// g)   c= !(a && b);
// h)   c= (! a) && (!b);
// i)    c= (a && (!a));
// j)    c=(((a<=(b*3.2)) &&(b%2!=0))|| (1));

#include <stdio.h>

int main(){

    int a=2, b=3, c=0, d =0, e=1;
    
    printf("a) = %s", 5>3 ? "true" : "false");
    printf("\n");

    printf("b) = %s", ( (4<5) && (2>2)) ? "true" : "false");
    printf("\n");

    printf("c) = %s", !b ? "true" : "false");
    printf("\n");

    printf("d) = %s", ((a%2 ==0) || (a-b <10)) ? "true" : "false");
    printf("\n");

    printf("e) = %s", (d && e) ? "true" : "false");
    printf("\n");

    printf("f) = %s", (d || e) ? "true" : "false");
    printf("\n");

    printf("g) = %s", !(a && b) ? "true" : "false");
    printf("\n");

    printf("h) = %s", (! a) && (!b) ? "true" : "false");
    printf("\n");

    printf("i) = %s", (a && (!a)) ? "true" : "false");
    printf("\n");

    printf("j) = %s", (((a<=(b*3.2)) &&(b%2!=0))|| (1)) ? "true" : "false");
    printf("\n");

    return(0);
    };