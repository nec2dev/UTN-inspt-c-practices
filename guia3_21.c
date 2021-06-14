/*21. Se ingresa un número correspondiente a la cantidad 
de términos a considerar entre los paréntesis, y la 
computadora muestra el valor de la correspondiente 
aproximación de Pi: Pi = 4·(1-1/3+1/5-1/7+1/9-1/11+ ... + 1/n)
fórmula de Leibniz*/

#include <stdio.h>

int main (){

    int cuenta=0, operador=1, cantterminos;
    double numerador=4, denominador=1, entornopi=0;
    
    //pedimos un numero positivo entre 1 y 10
    printf("Ingrese un numero positivo y entero para definir la cantidad de terminos para realizar la aproximacion a Pi:\n");
    scanf("%i",&cantterminos);

    for (cuenta; cuenta<cantterminos; cuenta++) {
    entornopi += operador*(numerador/denominador);
    denominador += 2;  
    operador *= -1;   
    }
    printf("%lf", entornopi);

    return 0;
}
