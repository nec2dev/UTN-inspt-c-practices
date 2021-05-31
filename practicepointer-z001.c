#include<stdio.h>

int main()
{

int *p, a=5;

float *q, f=5.7;

double *s, m=3.5;

char *r, c='h';

p=&a;
q=&f;
s=&m;
r=&c;

printf("\n p contiene este valor: %d     \n p+1 es igual a %d   \n p+2 es igual a %d ", p, p+1,p+2);
printf("\n q contiene este valor: %d     \n q+1 es igual a %d   \n q+2 es igual a %d ", q, q+1, q+2);
printf("\n s contiene este valor: %d     \n s+1 es igual a %d   \n s+2 es igual a %d ", s, s+1, s+2);
printf("\n r contiene este valor: %d     \n r+1 es igual a %d   \n r+2 es igual a %d ", r, r+1, r+2);

return 0;

}
