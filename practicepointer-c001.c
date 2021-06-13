/*c) Probar este código y deducir cual es el significado 
de el doble asterisco ***/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){ 

    int *p, a=1, b=8, **s;

    printf(" --------- Ejercicios de punteros: c ----------\n\n");

    p=&a;
    b=*p+1;
    s=&p;

    printf("a=%f &a=%f\n\n",a,&a);
    printf("b=%f &b=%f\n\n",b,&b);
    printf("p=%f *p=%f &p=%f\n\n",p,*p,&p);
    printf("s=%f *s=%f &s=%f\n\n",s,*s,&s);

    *s=&b;

    printf("Se ejecuto *s=&b\ny ahora\n\n");
    printf("s=%f *s=%f &s=%f\n\n",s,*s,&s);

    **s=79;

    printf("a=%f &a=%f\n\n",a,&a);
    printf("b=%f &b=%f\n\n",b,&b);
    printf("p=%f *p=%f &p=%f\n\n",p,*p,&p);
    printf("\n");
    system("pause");
    return(0);
}