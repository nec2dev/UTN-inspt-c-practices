/*Realizar la traza del siguiente programa. Ejecutarlo
y comentar qué tarea realiza cada instrucción o línea
del programa*/

#include <stdio.h>
int main() {
   
   int *p;
   int a=1, b=2;
   int **s;

   p=&a;
   b=*p+1;
   s=&p;
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