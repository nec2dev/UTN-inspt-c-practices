/*21.Se ingresa un número de hasta 5 cifras y se indica si es 
o no capicúa*/

#include <stdio.h>

int main(){

    int num, capi, u, d, c, m, dm;

    printf("ingresa un númera de hasta cinco cifras\n"); 
    scanf("%i", &num);

    int capi = numero % 10;
        capi *= 10;
        capi += digito;
        num /= 10;

    if(capi==num){
        printf("El número ingresado es capicua");
    }else{
        printf("El número ingresado no es capicua"); 
    }

    return(0);
}