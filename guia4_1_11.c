/*Comenta el siguiente programa*/

#include <stdio.h>
int main() {
   
   int a,b,c;
   int *p1, *p2;

   p1=&a;
   *p1=1;
   p2=&b;
   *p2=2;
   p1=p2;
   *p1=0;
   p2=&c;
   *p2=3;


   
    //p=&b
    printf("p=%d, *p=%d, &p=%d\n", p, *p, &p);
    printf("s=%d, *s=%d, &s=%d", s, *s, &s);

   *s=&b;

    printf("Se ejecuto *s=&b\ny ahora...\n");
    printf("s=%d, *s=%d, &s=%d", s, *s, &s);

   **s=79;

    printf("a=%d, &a=%d\n", a, &a);
    printf("b=%d, &b=%d\n", b, &b);

   system("pause");

   return 0;
};