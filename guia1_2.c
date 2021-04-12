/* 2.Usa expresiones equivalentes para las siguientes, 
usando operadores mixtos.
a) x = 10 + x -y;
b) r = 100*r;
c) y = y/(10+x);
d) z = 3 * x + 6;*/

#include <stdio.h>
int main() {
   double x, y, z, r;
   x=1;
   y=2;
   z=3;
   r=4;

   printf("a) x = 10 + x -y, ");

   if((x = 10 + x -y)==(x += 10-y)){
       if((x = 10 + x -y)==(x -= y+10)){
           printf("Su expresión equivalente es: x += 10-y\n");
       }else{
           printf("Su expresión equivalente es: x -= y+10\n");
           }}else{
               printf("Su expresión equivalente es: x += 10+y\n");
   }


    printf("b) r = 100*r, ");

   if((r = 100*r)==(r *= 100*r)){
       if((r = 100*r)==(r *= 100)){
           printf("Su expresión equivalente es: r *= 100*r\n");
       }else{
           printf("Su expresión equivalente es: r *= 100\n");
           }}else{
               printf("Su expresión equivalente es: r += 100\n");
   }


    printf("c) y = y/(10+x), ");

   if((y = y/(10+x))==(y/=10*x)){
       if(y = y/(10+x)==(y /= 10 + y/x)){
           printf("Su expresión equivalente es: y /= 10*x\n");
       }else{
           printf("Su expresión equivalente es: y /= 10 + y/x\n");
           }}else{
               printf("Su expresión equivalente es: y /= 10+x\n");
   }


    printf("d) z = 3 * x + 6, ");

   if((z=3*x+6)==(z+=6)){
       if(z=3*x+6)==(z*=3)){
           printf("Su expresión equivalente es: z += 6*x\n");
       }else{
           printf("Su expresión equivalente es: y /= 10 + y/x\n");
           }}else{
               printf("La expresión equivalente no es posible\n");
   }
   
   return 0;
};