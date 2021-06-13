/*41.Traduce las sentencias if a sentencias con el 
operador “?”y “:”.*/

#include <stdio.h>
#include <math.h>

int main(){
     
    int a=8, b=9, x=5;
    float y, z;

    if(x>8) 
    y=23; 
    else z=-5;
    if ((x>=8)&&(x!=12))   
    z=sqrt(6*x);
    else if(x>0)z=sin(3*x);
        else
        z=sin(5*x);

    printf("%f\n", y);
    printf("%f\n", z);

    return(0);
}