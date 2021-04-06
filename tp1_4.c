// 4) Indicar cuál es la salida por pantalla para cada 
// sentencia printf, siendo: int a=15;
// float b=13.546; char  c=’A’; char d=’a’; int e=5>1;
// a)  printf ("a vale %d", a);
// b)  printf ("a vale %o", a);
// c)  printf ("a vale %X", a);
// d)  printf ("a vale %f", a);
// e)  printf ("a vale %c", a);
// f)   printf ("b vale %d", b);
// g)  printf ("b vale %5.2d", b);
// h)  printf ("b vale %f", b);
// i)   printf ("b vale %.1f", b);
// j)   printf ("b vale %.2f", b);
// k)  printf ("b vale %6.4f", b);
// l)   printf ("b vale %6.1f", b);
// m) printf ("b vale %c", b);
// n)  printf ("b vale %o", b);
// o)  printf ("b vale %X", b);
// p)  printf ("c vale %d", c);
// q)  printf ("c vale %f", c);
// r)   printf ("c vale %c", c);
// s)   printf ("c vale %o", c);
// t)   printf ("c vale %X", c);
// u)  printf ("d vale %d", d);
// v)  printf ("d vale %f", d);
// w) printf ("d vale %c", d);
// x)  printf ("d vale %o", d);
// y)  printf ("d vale %X", d);
// z)  printf ("e vale %d", e);
// aa) printf ("e vale %f", e);
// bb) printf ("e vale %c", e);
// cc) printf ("e vale %o", e);
// dd) printf ("e vale %X", e);

#include <stdio.h>

int main(){

    int a=15, e=5>1;
    float b=13.546; 
    char  c='A', d='a';
    
    printf ("a) a vale: %d", a);
    printf("\n");

    printf ("b) a vale: %o", a);
    printf("\n");

    printf ("c) a vale: %X", a);
    printf("\n");

    printf ("e) a vale: %c", a);
    printf("\n");

    printf ("f) b vale: %d", b);
    printf("\n");

    printf ("g) b vale:  %5.2d", b);
    printf("\n");

    printf ("h) b vale: %f", b);
    printf("\n");

    printf ("i) ba vale:%.1f", b);
    printf("\n");

    printf ("j) b vale:%.2f", b);
    printf("\n");

    printf ("k) b vale:  %6.4f", b);
    printf("\n");

    printf ("l) a vale: %6.1f", b);
    printf("\n");

    printf ("m) b vale: %c", b);
    printf("\n");

    printf ("n) b vale: %o", b);
    printf("\n");

    printf ("o) b vale: %X", b);
    printf("\n");

    printf ("p) c vale: %d", c);
    printf("\n");

    printf ("q) c vale: %f", c);
    printf("\n");

    printf ("c) c vale: %c", c);
    printf("\n");

    printf ("s) c vale: %o", c);
    printf("\n");

    printf ("t) c vale: %X", c);
    printf("\n");

    printf ("u) d vale: %d", d);
    printf("\n");

    printf ("v) d vale: %f", d);
    printf("\n");

    printf ("w) d vale: %c", d);
    printf("\n");

    printf ("x) d vale: %o", d);
    printf("\n");

    printf ("y) d vale: %X", d);
    printf("\n");

    printf ("z) e vale: %d", e);
    printf("\n");

    printf ("aa) e vale: %f", e);
    printf("\n");

    printf ("bb) e vale: %c", e);
    printf("\n");

    printf ("cc) e vale: %o", e);
    printf("\n");

    printf ("dd) e vale: %X", e);
    printf("\n");

    return(0);
    };