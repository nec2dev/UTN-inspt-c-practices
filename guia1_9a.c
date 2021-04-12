/*9.Encuentra el error en cada uno de los siguientes programas 
e indica de qué tipo es.*/

// main(){
//     integer x;
//     real y;
//     scanf(“%D”, y);
//     printf("%f",x);
//     }
#include <stdio.h>

int main (){

     int x;
     float y;
     
     printf("Ingrese un número real: \n");
     scanf("%f", &y);
     printf("%f\n", y);

     printf("Ingrese un número entero: \n");
     scanf("%d", &x);
     printf("%d\n", x);

     return 0;

};