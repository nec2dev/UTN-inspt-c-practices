/*Ejercicios de punteros*/
#include <stdio.h>

int main (){

    //1 - declarar las variables enteras a y b asignar 10 a a y 20 a b
    int a=10, b=20;

    //2 - declarar p y q como punteros a int
    int *p, *q;

    //3 - asignar a p la direccion de a
    p=&a;

    //4 - emitir el valor de a y su direccion
    printf("El valor de a es: %i, y su direcci%cn es: %i\n", a, 162, &a);

    /*5 - emitir la direccion contenida en p, el valor contenido en la 
    direccion contenida en p, y la direccion de p*/
    printf("La direcci%cn contenida en p es: %i, el valor contenido en la direcci%cn contenida en p es: %i, y la direcci%cn de p es: %i\n", 162, p, 162, *p, 162, &p);

    //6 - asignar a q la direccion de a
    q=&a;

    /*7 - emitir la direccion contenida en q, el valor contenido en la 
    direccion contenida en q y la direccion de q*/
    printf("La direcci%cn contenida en q es: %i, el valor contenido en la direcci%cn contenids en q es: %i, y la direcci%cn de q es: %i\n", 162, q, 162, *q, 162, &q);

    return 0;
}