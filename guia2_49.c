/*49.¿Qué errores daría al compilar el siguiente código?
char c=65, n;
n=’a’;
float m=1*/

#include <stdio.h>

int main(){
     
    char c=65, n;
    n='a';
    float m=1;

    printf("n= %c, c= %c, m= %f", n, c, m);

    return(0);

    /*No da ningun error, solo que al ingresar un 65 en
    una variable instanciada como char mostrará el carácter
    correspondiente de ese símbolo ANSCII*/
}
