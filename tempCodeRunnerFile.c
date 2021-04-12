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