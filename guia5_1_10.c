/*10.	Escriba un programa que pida al usuario introducir un carácter, 
y le informa si se trata de una vocal o no. Con tal fin, escriba los 
siguientes subprogramas:
    a)Una función EsMayuscula, que determine si un carácter es mayúscula o no.
    b)Una función AMinuscula que, a partir de un carácter c, devuelva 
    el carácter en minúscula con tal de que sea  mayúscula. De lo contrario, 
    debe devolver el mismo carácter c.
    c)Una función EsVocal que determine si un carácter es una vocal o no.
*/

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

EsMayuscula(char char1){
    if(char1>='a'&&char1<='z')
        return 0;
    else if(char1>='A'&&char1<='Z')
        return 1;
}

AMinuscula(int typechar, char char1){
    if(typechar==1)
    char1=tolower(char1);
    return char1;
}

bool EsVocal(char char1){
    if(char1=='a'||char1=='e'||char1=='i'||char1=='o'||char1=='u'){
        return 1;
    }else{
        return 0;
    }
}
 
int main(){

    char char1;
    int typechar;

    printf("Ingrese un caracter para validar si es una vocal o no: \n");
    scanf("%c", &char1);

    typechar=EsMayuscula(char1);
    char1=AMinuscula(typechar, char1);
    typechar=EsVocal(char1);

    if(typechar==1){
        printf("El caracter introducido es una vocal");
    }else{
        printf("El caracter introducido no es una vocal");
    }
    
}