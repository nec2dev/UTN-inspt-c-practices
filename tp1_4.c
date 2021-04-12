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
    
    printf ("a) a con %%d imprime:  %d", a);
    printf("\n");

    printf ("b) con %%o imprime: %o", a);
    printf("\n");

    printf ("c) a con %%X imprime: %X", a);
    printf("\n");

    printf ("e) a con %%c imprime: %c", a);
    printf("\n");

    printf ("f) b con %%d imprime: %d", b);
    printf("\n");

    printf ("g) b con %%5.2d imprime:  %5.2d", b);
    printf("\n");

    printf ("h) b con %%f imprime: %f", b);
    printf("\n");

    printf ("i) b con %%.1f imprime: %.1f", b);
    printf("\n");

    printf ("j) b con %%.2f imprime: %.2f", b);
    printf("\n");

    printf ("k) b con %%6.4f imprime:  %6.4f", b);
    printf("\n");

    printf ("l) a con %%6.1f imprime: %6.1f", b);
    printf("\n");

    printf ("m) b con %%c imprime: %c", b);
    printf("\n");

    printf ("n) b con %%o imprime: %o", b);
    printf("\n");

    printf ("o) b con %%X imprime: %X", b);
    printf("\n");

    printf ("p) c con %%d imprime: %d", c);
    printf("\n");

    printf ("q) c con %%f imprime: %f", c);
    printf("\n");

    printf ("c) c con %%c imprime: %c", c);
    printf("\n");

    printf ("s) c con %%o imprime: %o", c);
    printf("\n");

    printf ("t) c vcon %%X imprime: %X", c);
    printf("\n");

    printf ("u) d con %%d imprime: %d", d);
    printf("\n");

    printf ("v) d con %%f imprime: %f", d);
    printf("\n");

    printf ("w) d con %%c imprime: %c", d);
    printf("\n");

    printf ("x) d con %%o imprime: %o", d);
    printf("\n");

    printf ("y) d con %%X imprime: %X", d);
    printf("\n");

    printf ("z) e con %%d imprime: %d", e);
    printf("\n");

    printf ("aa) e con %%f imprime: %f", e);
    printf("\n");

    printf ("bb) e con %%c imprime: %c", e);
    printf("\n");

    printf ("cc) e con %%o imprime: %o", e);
    printf("\n");

    printf ("dd) e con %%X imprime: %X", e);
    printf("\n");

    return(0);
    };