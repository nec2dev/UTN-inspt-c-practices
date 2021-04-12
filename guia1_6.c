/*6.Supone que las variables a, b y c tienen asignados los valores 
49, 5 y 3 respectivamente. Encuentra:
a)a % b * c + 1
b)a % (b * c ) + 1
c)24 / c * 4
d)(int) (a / b ) % 2
e)48 / (c*2) * 4*/

#include <stdio.h>
int main() {
   
   int a=49, b=5, c=3;
   float res_a = a%b*c+1;
   printf("a) a%b*c+1 = %.2f\n", res_a);

   //int a=49, b=5, c=3;
   float res_b = a%(b*c)+1;
   printf("b) a%(b*c)+1 = %.2f\n", res_b);

   //int a=49, b=5, c=3;
   float res_c = 24/c*4;
   printf("c) 24/c*4 = %.2f\n", res_c);

   //int a=49, b=5, c=3;
   int res_d = (a/b)%2;
   printf("d) (a/b)%2 = %i\n", res_d);

   //int a=49, b=5, c=3;
   float res_e = 48/(c*2)*4;
   printf("e) 48/(c*2)*4 = %.2f\n", res_e);
   
   return 0;
};