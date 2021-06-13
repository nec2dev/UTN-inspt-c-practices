/*45.	¿Qué valor tiene la variable al terminar el 
siguiente fragmento de código?
a=a & 1;
*/

#include <stdio.h>

int main(){
     
    int a=6;
 
    a=a&1;

    printf("%d", a);

    /*1 si es par y 0 si es impar*/

    return(0);
}