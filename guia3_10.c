/*10.Leer un número y emitir su factoreo. Ej 60 es 2*2*3*5*/

#include <stdio.h>

int main (){
    int n,i,j;
    int a[50];   
      //pedimos un numero positivo
    printf("ingrese el numero:\n");
    scanf("%d",&n);
    while(n<=0)
    {
       printf("el numero debe ser positivo:\n");
       scanf("%d",&n);
    }   
      //obtenemos los factores
    i=2;
    j=0;
    while(n>1)
    {
       if(n%i==0)
       {
          n=n/i;
          a[j]=i;
          j++;
          i=2;
       }
       else
          i++;
    }   
      //imprimir los factores
    for(i=0;i<j;i++)
       printf("\nfactor %d = %d",i+1,a[i]);
    
    getchar();
    return 0;
}