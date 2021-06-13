/*Ejercicio propuesto:
 Escribir un programa que realice cada una de las siguientes sentencias:
1) Declarar a, b y c variables enteras, y p, q y r variables puntero a entero.
2) Declarar m, n variables de tipo float y s y t variables puntero a float.
3) Asignar a p la dirección de a y a q la dirección de b.
4) Asignar a b el valor 40 usando el puntero q. Mostrar el valor de b, la dirección de b , el
valor de q, la dirección de q y el valor contenido en la dirección almacenada en q.
5) Ingresar desde teclado el valor de a usando su dirección almacenada. Mostrar el valor
de a, la dirección de a, el valor de p, la dirección de p y el valor contenido en la dirección
almacenada en p.
6) Asignar a r la dirección de a.
7) Asignar a la posición de memoria contenida en el puntero r el valor 200. Mostrar el
valor de a, la dirección de a , el valor de p, la dirección de p y el valor contenido en la
dirección almacenada en p, y el valor de r, la dirección de r y el valor contenido en la
dirección almacenada en r.*/

#include <stdio.h>

int main (){

    //1) Declarar a, b y c variables enteras, y p, q y r variables puntero a entero.
    int a, b, c;
    int *p, *q, *r;

    //2) Declarar m, n variables de tipo float y s y t variables puntero a float.
    float m, n;
    float *s, *t;

    //3) Asignar a p la dirección de a y a q la dirección de b.
    p=&a;
    q=&b;

    //4) Asignar a b el valor 40 usando el puntero q. Mostrar el valor de b, la dirección de b , el
    //valor de q, la dirección de q y el valor contenido en la dirección almacenada en q.
    *q=40;
    printf("La variable b contiene el valor %f y esta ubicada en %f\n", b, &b);
    printf("\nLa variable q contiene el valor %f, esta ubicada en %f y el valor de la direccion que contiene es %f\n", q, &q, *q);

    //5) Ingresar desde teclado el valor de a usando su dirección almacenada. Mostrar el valor
    //de a, la dirección de a, el valor de p, la dirección de p y el valor contenido en la dirección
    //almacenada en p.
    printf("Ingrese un valor para a\n");
    scanf("%i" ,p);
    printf("El valor de a es %f y su direccion es %f\n", a, &a);
    printf("El valor de p es %f, su direccion es %f y el valor de la direccion que contiene es %f\n", p, &p, *p);

    //6) Asignar a r la dirección de a.
    r=p;
    *r=200;
    printf ("El valor de a es %f y su direccion es %f\n", a, &a);
    printf ("El valor de p es %f, su direccion es %f y el valor de la direccion que contiene es %f\n", r, &r, *r);

    //7) Asignar a la posición de memoria contenida en el puntero r el valor 200. Mostrar el
    //valor de a, la dirección de a , el valor de p, la dirección de p y el valor contenido en la
    //dirección almacenada en p, y el valor de r, la dirección de r y el valor contenido en la
    //dirección almacenada en r.
    *r=200;
    printf ("\nEl valor de a es %f y su direccion es %f. El valor de p es %f y su direccion es %f y el valor contenido en la dirección almacenada en p es %f",a,&a,p,&p,*p);
    printf ("\nEl valor de a es %f y su direccion es %f y el valor contenido en la direccion almacenada en r es %f",r,&r,*r);

    return 0;
}