/*30.Tipea el siguiente programa que utiliza la cons-
trucción else-if. Observar su funcionamiento con el 
depurador si es necesario.*/
#include <stdio.h>

main(){ 
char caracter;
       printf ("Introduce un carácter y pulsa Intro: ");
       scanf ("%c",&caracter);
if ( (caracter >= 'A')  &&  (caracter <= 'Z') )
printf("La letra es una mayúscula\n");
else if ( (caracter >= 'a') && ( caracter <= 'z') )
printf("La letra es una minúscula\n");
else if ( (caracter >= -128) && ( caracter <= 127) )
printf("La letra es un numero\n");
else
printf("No es una letra ni un numero\n");
return(0);
}

/*Amplía para que además de decirnos si el carácter introducido 
es una letra mayúscula o minúscula, que nos diga si el carácter 
es un dígito numérico.*/

