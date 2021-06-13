/*40.Que valores se imprimen en el siguiente fragmento 
de código?*/

#include <stdio.h>

int main(){
     
    int a=8, b=9, x=5;
    float y, z;

    //y=(a>b)?3*a+b:2*a+b;
    if(a>b)
    y=3*a+b;
    else
    y=2*a+b;

    //z=a>=2*x?(a<6)?4*a:5*a:3*a+1;
    if(a>=2*x)
        if(a<6)
            z=4*a;
        else
            z=5*a;
    else
        z=3*a+1;

    printf("%f\n", y);
    printf("%f\n", z);

    return(0);
}