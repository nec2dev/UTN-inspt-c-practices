/*2. Comenta el siguiente programa*/

#include <stdio.h>
int main() {
   
   //a)
   int a, b;
   int *pa;
   a=5;
   pa=&a;
   b=*pa;

   //b)
   int i, j, *p;
   p=&i;
   *p=21;
   p=&j;
   *p=1;

   return 0;
};