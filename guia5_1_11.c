/*11.Escribir una funcion que indique si un número recibido por parámetro 
es primo o no, retornando 1 s lo es y 0 si no.*/

#include<stdio.h>
#include<stdbool.h>

bool isprimenumber(int num){
    if (num==0||num==1) return 0;
    if (num==4) return 0;
    for (int i=2; i<num/2; i++) {
    if (num%i==0) 
    return 0;
  }
  return 1;
}
 
int main(){

    int num;

    printf("Ingrese un numero para saber si es numero primo: \n");
    scanf("%d", &num);

    printf("%d", isprimenumber(num));
    
}