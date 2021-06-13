/*47.¿Qué valor tiene la variable al terminar el 
siguiente fragmento de código?
a=a | 1;
*/

#include <stdio.h>

int main(){
     
    int a=5;
 
    a=a|1;

    printf("%d", a);

    /*Uno mas que a, si a era par*/

    return(0);
}