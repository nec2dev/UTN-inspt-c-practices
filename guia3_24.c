/*Se ingresa un número entero N y se emiten los N primeros números primos.*/

#include <stdio.h>

int main (){

    int num, i, a=0;

    printf("Ingrese un numero entero para indicar la cantidad de numeros primos a mostrar: ");
    scanf("%d", &num);

    for(i=2;i<=num;i++){
        int cont=0;
        for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    cont=cont+1;
                    break;
                }
        }
        if(cont<1){
            num++;
        }
    }
 
    return 0;
}