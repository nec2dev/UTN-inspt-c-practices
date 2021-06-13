/*Escribe un programa teniendo en cuentA las
siguientes funciones:
    lee_opcion: Lee la opción deseada y comprueba su validez
    menu: Muestra el menú en la pantalla
    cuadrado, circulo, rectangulo, trapecio, triangulo,
    Calculan la superficie correspondiente*/

#include <stdio.h>
#include <stdlib.h>

    int main() {

    float lado, radio, base, base1, base2, altura, supcuadrado, supcirculo, suprectangulo, suptrapecio, suptriangulo;
    int op;
    
    //Funciones pedidas:
    int lee_opcion(){
       int opcion;
       printf("\nPor favor, ingrese la opcion deseada:\n");
       scanf("%d", &opcion);
       op=opcion;
   }

    void menu(){
       printf("========================\nCALCULO DE SUPERFICIES (version 1.0\n========================\n");
       printf("1.Cuadrado\n");
       printf("2.Circulo\n");
       printf("3.rectangulo\n");
       printf("4.trapecio\n");
       printf("5.triangulo\n");
       printf("0.Salir del programa\n");
   }

   float cuadrado(float lado){      
       supcuadrado = lado*lado; 
       return supcuadrado;
   }

   float circulo(float radio){
       float pi=3.141176;
       supcirculo = pi*radio*radio;
       return supcirculo;
   }

   float rectangulo(float base, float altura){
       suprectangulo = base*altura;
       return suprectangulo;
   }

   float trapecio(float base1, float base2, float altura){   
       suptrapecio = (base1+base2)*altura/2;    
       return(suptrapecio); 
   }

   float triangulo(float base, float altura){ 
       suptriangulo = (base*altura)/2;
       return suptriangulo;
   }

       menu();
       lee_opcion();

       switch(op){

            case 0:
                printf("Usted ha salido del programa");
                break;
                
			case 1:
                printf("Ingrese la medida del lado del cuadrado\n");
                scanf("%f", &lado);
                float supcuadrado=cuadrado(lado);
                printf("La superficie del cuadrado es: %.2f", supcuadrado);
				break;

			case 2:
                printf("Ingrese la medida del radio del circulo\n");
                scanf("%f", &radio); 
                float supcirculo=circulo(radio);
                printf("La superficie del circulo es: %.2f", supcirculo);
				break;

			case 3:
				printf("Ingrese la medida de la base y la altura del rectangulo\n");
                scanf("%f %f", &base, &altura);
                float suprectangulo=rectangulo(base, altura);
                printf("La superficie del rectangulo es: %.2f", suprectangulo);
                break;

			case 4:
				printf("Ingrese la medida de la base menor, la base mayor y la altura del trapecio\n");
                scanf("%f %f %f", &base1, &base2, &altura);
                float suptrapecio=trapecio(base1, base2, altura);
                printf("La superficie del trapecio es: %.2f", suptrapecio);
				break;

			case 5:
				printf("Ingrese la medida de la base y la altura del triangulo\n");
                scanf("%f %f", &base, &altura);
                float suptriangulo=triangulo(base, altura);
                printf("La superficie del triangulo es: %.2f", suptriangulo);
				break;

			default:
				printf("No se ha ingresado un valor valido\n");	
                menu();
			}

            return(0);

}