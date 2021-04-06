// /*1) Indicar qué es lo que se almacena en cada una de las 
// variables indicadas a continuación, si serealizan las operaciones 
// que se indican, sabiendo que se han definido las variables usadas 
// de lasiguiente forma, e indicándose sus valores iniciales:*/

#include <stdio.h>
int main() {

    // int a=3, b=2, c=1, d=1, e=1;
    // float m=2.5, n=5.4, r=1.0, s=1.0;
    int a=3, b=2, c=1, d=1, e=1;
    float m=2.5, n=5.4, r=1.0, s=1.0;

    d=m;
    printf("a) d= %i", d);
    printf("\n");

    d=n;
    printf("b) d= %i", d);
    printf("\n");

    e=3.7;
    printf("c) e= %i", e);
    printf("\n");

    d=a;
    printf("d) d= %i", d);
    printf("\n");

    d=a+b;
    printf("e) d= %i", d);
    printf("\n");

    d=a*b;
    printf("f) d= %i", d);
    printf("\n");

    d=a/b;
    printf("g) d= %i", d);
    printf("\n");

    d=b/4;
    printf("h) d= %i", d);
    printf("\n");

    d=a%b;
    printf("i) d= %i", d);
    printf("\n");

    d=a%2;
    printf("j) d= %i", d);
    printf("\n");

    e=b/c;
    printf("k) e= %i", e);
    printf("\n");

    e=c/b;
    printf("l) e= %i", e);
    printf("\n");

    r=a+b;
    printf("m) r= %f", r);
    printf("\n");

    r=a/b;
    printf("n) r= %f", r);
    printf("\n");

    r=a/2;
    printf("o) r= %f", r);
    printf("\n");

    r=a/2.0;
    printf("p) r= %f", r);
    printf("\n");

    s=m+n;
    printf("q) s= %f", s);
    printf("\n");

    s=3+4-1;
    printf("r) s= %f", s);
    printf("\n");

    s=3.0+4.0-1;
    printf("s) s= %f", s);
    printf("\n");

    a= m;
    printf("t) a= %i", a);
    printf("\n");

    a=m/2;
    printf("u) a= %i", a);
    printf("\n");

    a=m/2.0;
    printf("v) a= %i", a);
    printf("\n");

    a=3.0+4.0-1;
    printf("w) a= %i", a);
    printf("\n");

    a=3;
    r=a+1;
    printf("x) r= %f", r);
    printf("\n");

    r=a+1.0;
    printf("y) r= %f", r);
    printf("\n");

    a++;
    printf("z) %i", a);
    printf("\n");

    r=1.0;
    r++;
    printf("aa) %f", r);
    printf("\n");

    b--;
    printf("bb) %i", b);
    printf("\n");

    a=3;
    a+=5;
    printf("cc) %i", a);
    printf("\n");

    s=1.0;
    s*=5;
    printf("dd) %f", s);
    printf("\n");
};

