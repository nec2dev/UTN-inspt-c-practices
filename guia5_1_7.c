/*7.Escribir un programa, que usando funciones escritas previamente, 
verifique si un caracter introducido es un número o no.*/

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

bool ischar(char char1){
    if(isdigit(char1)){
        return 1;
    }else{
        return 0;
    }
}
 
int main(){

    char char1;
    int typechar;

    printf("Ingrese un caracter para validar si es numero o letra: \n");
    scanf("%c", &char1);

    typechar=ischar(char1);

    if(typechar==1){
        printf("El caracter introducido es un numero");
    }else{
        printf("El caracter introducido es una letra");
    }
    
}