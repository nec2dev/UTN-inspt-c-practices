/*11. Se lee un número natural N y la computadora emite 
los números naturales pares menores que N.*/

#include <stdio.h>

int main (){
    int n, i; 
    
    //pedimos un numero positivo
    printf("ingrese un numero natural:\n");
    scanf("%d",&n);

    while(n<=0){
       printf("el numero debe ser natural:\n");
       scanf("%d",&n);
    }    
    
    //imprimir los factores
    for(i=n;i>=0;i--)
       if(i%2==0)
       printf("%d\n",i);   
       getchar();

    return 0;
}