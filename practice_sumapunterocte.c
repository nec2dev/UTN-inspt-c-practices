#include<stdio.h>

int main()
{
int *p, a=5;
p=&a;


double *q, b=3.5;
q=&b;


char *r, c='h';
r=&c;

printf ("p contiene %f \n p+1 vale %f \n p+4 vale %f", p, p+1, p+4);

printf ("\nq contiene %f \n q+1 vale %f \n q+4 vale %f", q, q+1, q+4);

printf ("\nr contiene %f \n r+1 vale %f \n r+4 vale %f", r, r+1, r+4);

return 0;

}
