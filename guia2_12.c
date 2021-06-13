/*12. Completa los espacios en blanco de manera tal que el programa 
indique si la persona es o no mayor de edad, considerando, 
int edad=18;*/

#include <stdio.h>

int main() {
   int edad=18;

    if(edad>=18)
    printf("a) Es mayor de edad, ya que tiene %f años \n" , edad); 

    else 
    printf ("a) No es mayor de edad\n"); 

    if(edad<18) 
    printf("b) No es mayor de edad, ya que tiene %f años \n" , edad); 

    else 
    printf ("b) Es mayor de edad\n"); 

};