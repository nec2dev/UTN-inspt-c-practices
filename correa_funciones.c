/*Escribe un programa teniendo en cuentA las
siguientes funciones:
    lee_opcion: Lee la opción deseada y comprueba su validez
    menu: Muestra el menú en la pantalla
    cuadrado, circulo, rectangulo, trapecio, triangulo,
    Calculan la superficie correspondiente*/

#include <stdio.h>
//#include <math.h>

int main() {
   
   lee_opcion(float lado){
       
   }
   menu(){
       printf("========================\nCALCULO DE SUPERFICIES (version 1.0\n========================\n");
       printf("1.Cuadrado\n");
       printf("2.Circulo\n");
       printf("3.rectangulo\n");
       printf("4.trapecio\n");
       printf("5.triangulo\n");
       printf("0.Salir del programa\n");
   }
   cuadrado(float lado){
       //float lado;
       float supcuadrado = lado*lado; 
       return supcuadrado;
   }

   circulo(float radio){
       float pi=3.141176;
       float supcirculo = pi*radio*radio);
       return supcirculo;
   }

   rectangulo(float base, altura){
       //float base, altura;
       float suprectangulo = base*altura;
       return suprectangulo;
   }

   trapecio(float base1, base2, altura){
       //float base1, base2, altura;
       float suptrapecio = (base1+base2)*altura/2;
       return suptrapecio;
   }

   triangulo(float base, altura){
       //float base, altura;
       float suptriangulo = (base*altura)/2;
       return suptriangulo;
   }

   return 0;
}