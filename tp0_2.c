// 2)onsidere el siguiente programa: #include <stdio.h>
// Prof.: Ing. Calvo JTP: Prof. Juan Capia
// INSPT-UTN
// int main() {
// printf( " Me gusta C" );
// printf (" Fin del mensaje \n");
// printf ("Adios"); return(0);
// }
// a) Indique cual es el efecto de incorporar a la segunda salida por pantalla el carácter '\n´. Verifique el uso incorporándolo a otras sentencias de emisión por pantalla.
// b) Investigue, en las salidas, el uso de: ´\t´,
// c) ¿cuál es el sentido de la sentencia return 0 de la última línea?

#include <stdio.h>

int main(){

    printf("Me gusta C\n\n" );
    printf ("Fin del mensaje\n");
    printf ("\tAdios");
    
    return(0);
    }