/*1.Suponiendo los siguientes valores iniciales para las variables:
x = 2;
y = 6; 
z = 9; 
r = 100; 
s = 10; 
a = 15; 
b = 3;
¿Cuáles son los valores correctos en cadaexpresión?
a) x += 10;
b) s *= b;
c) r /= 0;
d) y += x + 10;
e) z -= a*b;*/

#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   int x=2, y=6, z=9, r=100, s=10, a=15, b=3;

   x += 10;
   printf("a) x += 10 => x: %i\n", x);

   s *= b;
   printf("b) s *= b => s: %i\n", s);

   //r /= 0;
   //printf("c) r /= 0 => r: %i", r, "\n");
   printf(") r /= 0 => r: error\n");

   x=2;
   y += x + 10;
   printf("d) y += x + 10 => y: %i\n", y);

   z -= a*b;
   printf("e) z -= a*b => z: %i\n", z);

   return 0;
};