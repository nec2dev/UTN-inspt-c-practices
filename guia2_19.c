/*19.Ingresados  tres caracteres, la computadora los muestra 
ordenados alfabéticamente.*/

#include <stdio.h>

int main(){

    char a, b, c;

    printf("Por favor, ingrese una letra\n");
    scanf(" %c", &a);
    printf("Ahora, ingrese otra letra\n");
    scanf(" %c", &b);
    printf("Por favor, ingrese un %cltimo caracter\n", 163);
    scanf(" %c", &c);

    if(a<b){
        if(a<c){
            if(b<c){
                printf("Los caracteres ordenados alfabeticamente son: %c %c %c\n\n", a, b, c);
            }else{
                printf("Los caracteres ordenados alfabeticamente son: %c %c %c\n\n", a, c, b);
            }
        }else{
            printf("Los caracteres ordenados alfabeticamente son: %c %c %c\n\n", c, a, b);
        }
    }else{
        if(a<c)
        {
            printf("Los caracteres ordenados alfabeticamente son: %c %c %c\n\n", b, a, c);
        }else{
            if(c<b){
                printf("Los caracteres ordenados alfabeticamente son: %c %c %c\n\n", c, b, a);
            }else{
                printf("Los caracteres ordenados alfabeticamente son:: %c %c %c\n\n", b, c, a);
            }
        }
    }

system("pause");

}