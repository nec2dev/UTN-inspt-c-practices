/*13. Se leen dos enteros N y  M , y se emite la tabla de 
multiplicar de N entre 1 y M.*/

#include <stdio.h>

int main (){
    int n, m;
    
    printf("ingrese un valor para n:\n");
    scanf("%d", &n);

    printf("ingrese un valor para m:\n");
    scanf("%d", &m);

    for(int i=1;i<=m;i++){
       printf("%d X %d = %d\n", i, n, i*n); 
    }
    return 0;
}