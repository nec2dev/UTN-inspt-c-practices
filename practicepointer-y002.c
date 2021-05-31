#include<stdio.h>

int main()
{

int *p, **pp, a=5, b=10;

p=&a;

pp=&p;

*p=35;

printf("\n a contiene este valor: %d     \n a está en  %d  ", a, &a);

printf("\n p contiene este valor: %d     \n p está en %d \n*p es %d ", p, &p,  *p);

printf("\n pp contiene este valor: %d     \n*pp es %d   \n**pp es %d ", pp, *pp, **pp);

printf ("\nHacemos **pp=75");

**pp=75;

printf("\n a contiene este valor: %d      \n a está en  %d  ", a, &a);

printf("\n p contiene este valor: %d     \n p está en %d \n *p es %d ", p,&p, *p);

printf("\n pp contiene este valor: %d     \n*pp es %d   \n**pp es %d ", pp, *pp, **pp);

printf("\nHacemos *pp=&b");

*pp=&b;

printf("\n a contiene este valor: %d     \n a está en  %d  ", a, &a);

printf("\n p contiene este valor: %d     \n  p está en %d \n *p es %d ", p,&p,  *p);

printf("\n pp contiene este valor: %d     \n *pp es %d   \n **pp es %d ", pp, *pp, **pp);


return 0;

}
