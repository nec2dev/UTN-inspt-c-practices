/*11-Comenta el siguiente programa*/

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
    printf("p=%f, *p=%f, &p=%f\n", p, *p, &p);
    printf("s=%f, *s=%f, &s=%f", s, *s, &s);

   *s=&b;

    printf("Se ejecuto *s=&b\ny ahora...\n");
    printf("s=%f, *s=%f, &s=%f", s, *s, &s);

   **s=79;

    printf("a=%f, &a=%f\n", a, &a);
    printf("b=%f, &b=%f\n", b, &b);

   system("pause");

   return 0;
};