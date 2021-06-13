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

printf("\n p contiene este valor: %f     \n p+1 es igual a %f   \n p+2 es igual a %f ", p, p+1,p+2);
printf("\n q contiene este valor: %f     \n q+1 es igual a %f   \n q+2 es igual a %f ", q, q+1, q+2);
printf("\n s contiene este valor: %f     \n s+1 es igual a %f   \n s+2 es igual a %f ", s, s+1, s+2);
printf("\n r contiene este valor: %f     \n r+1 es igual a %f   \n r+2 es igual a %f ", r, r+1, r+2);

return 0;

}
