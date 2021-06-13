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