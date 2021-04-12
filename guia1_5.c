/* 5.Evalúa cada una de las siguientes expresiones. Luego comprueba 
el resultado en el laboratorio.

a)8 * 6 / 3 * 4
b)(8 * 6) / 3 * 4
c)8 * 6 / (3 * 4)
d)(8 * 6 / 3 * 4)
e)(8 * 6) / (3 * 4)
f)1 + 4 * 5 + 8/ 4 + 4
g)1 + 4 * 5 -8 / 4 + 4
*/

#include <stdio.h>
int main() {
   
   float res_a = 8*6/3*4;
   printf("a) 8*6/3*4 = %f\n", res_a);

   float res_b = (8*6)/3*4;
   printf("b) (8*6)/3*4 = %f\n", res_b);

   float res_c = 6/(3*4);
   printf("c) 6/(3*4) = %f\n", res_c);

   float res_d = (8*6/3*4);
   printf("d) (8*6/3*4) = %f\n", res_d);

   float res_e = (8*6)/(3*4);
   printf("e) (8*6)/(3*4) = %f\n", res_e);

   float res_f = 1+4*5+8/4+4;
   printf("f) 1+4*5+8/4+4 = %f\n", res_f);

   float res_g = 1+4*5-8/4+4;
   printf("g) 1+4*5-8/4+4 = %f\n", res_g);
   
   return 0;

};
