/*12.Escribier una función que reciba un entero x y retorne el elemento 
de posición x de la sucesión de Fibonacci.*/

#include<stdio.h>
//Con funciones recursivas
// int fibonacciseq(int x){
//     if (x>2)
//     return fibonacciseq(x-1)+fibonacciseq(x-2);
//   else if (x==2)
//     return 1;
//   else if (x==1)       
//     return 1;
//   else if (x==0)
//     return 0;
// }
//Con ciclo for
int fibonacciseq(int x){
    int w,y,z,i, sum=0;
    for(i=1;i<=x;i++){    
        z=w+y;
        w=y;
        y=z;
        sum+=z;
  }
  return sum;
}
 
int main(){

    int x;

    printf("Ingrese un numero entero para saber la posicion en la secuencia de Fibonacci: \n");
    scanf("%d", &x);

    printf("%d", fibonacciseq(x));
    
}