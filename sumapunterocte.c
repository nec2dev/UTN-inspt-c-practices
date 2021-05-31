#include<stdio.h>

int main()
{
int *p, a=5;
p=&a;


double *q, b=3.5;
q=&b;


char *r, c='h';
r=&c;

printf ("p contiene %d \n p+1 vale %d \n p+4 vale %d", p, p+1, p+4);

printf ("\nq contiene %d \n q+1 vale %d \n q+4 vale %d", q, q+1, q+4);

printf ("\nr contiene %d \n r+1 vale %d \n r+4 vale %d", r, r+1, r+4);

return 0;

}
