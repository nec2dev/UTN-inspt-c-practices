/*9.Encuentra el error en cada uno de los siguientes programas 
e indica de qué tipo es.*/

// main(){
//     int n,total;
//     float promedio;n=0;
//     promedio=total/n;
//     printf("El promedio es: %f\n",promedio);
//     }

#include <stdio.h>

int main (){

     int n, total;
     float promedio;

     total = 320;
     n=3;

     promedio = total/n;
     
     printf("El promedio es: %.3f\n",promedio);

};