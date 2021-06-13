/*10.Leer un número y emitir su factoreo. Ej 60 es 2*2*3*5*/

#include <stdio.h>

int main (){
    int num, i=2, j=0;
    int factores[50];   
    
    //pedimos un numero positivo
    printf("ingrese un numero positivo:\n");
    scanf("%d",&num);

    while(num<=0){
       printf("el numero debe ser positivo:\n");
       scanf("%d",&num);
    }   
    
    //obtenemos los factores
    while(num>1){
       if(num%i==0){
          num=num/i;
          factores[j]=i;
          j++;
          i=2;
       }
       else
          i++;
    }   
    
    //imprimir los factores
    for(i=0;i<j;i++)
       printf("%d*",factores[i]);  
    getchar();

    return 0;
}