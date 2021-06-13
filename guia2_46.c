/*46.¿Qué valor tiene la variable al terminar el 
siguiente fragmento de código?
if (!(a & 1)) a++;
*/

#include <stdio.h>

int main(){
     
    int a=5;
 
    if (!(a&1)) 
    a++;

    printf("%d", a);

    /*Uno mas que a, si a era par*/

    return(0);
}