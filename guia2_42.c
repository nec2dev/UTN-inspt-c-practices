/*42.Traduce la siguiente sentencia con el operador? 
a sentencias if
x = (y>5) ? 2*y+1:(z<10) ? 3*y+2:5*z+1;*/

#include <stdio.h>

int main(){
     
    int x=8, y=9, z=5;

    if(y>5) 
    x=2*y+1; 
    else if(z<10) 
    x=3*y+2;
    else 
    x=5*z+1;

    printf("%d\n", x);

    return(0);
}
