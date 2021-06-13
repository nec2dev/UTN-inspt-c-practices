#include<stdio.h>

int main()
{

int *p, **pp, a=5, b=10;

p=&a;

pp=&p;

*p=35;

printf("\n a contiene este valor: %f     \n a est� en%f%d  ", a, &a);

printf("\n p contiene este valor: %f     \n p est� e%f%d \n*p e%f%d ", p, &p,  *p);

printf("\n pp contiene este valor: %f     \n*pp es %f   \n**pp es %f ", pp, *pp, **pp);

printf ("\nHacemos **pp=75");

**pp=75;

printf("\n a contiene este valor: %f      \n a est� en%f%d  ", a, &a);

printf("\n p contiene este valor: %f     \n p est� e%f%d \n *p e%f%d ", p,&p, *p);

printf("\n pp contiene este valor: %f     \n*pp es %f   \n**pp es %f ", pp, *pp, **pp);

printf("\nHacemos *pp=&b");

*pp=&b;

printf("\n a contiene este valor: %f     \n a est� en%f%d  ", a, &a);

printf("\n p contiene este valor: %f     \n  p est� e%f%d \n *p e%f%d ", p,&p,  *p);

printf("\n pp contiene este valor: %f     \n *pp es %f   \n **pp es %f ", pp, *pp, **pp);


return 0;

}
