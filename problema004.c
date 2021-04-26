/*Se ingresan 20 números por teclado y se indica si alguno fue negativo mediante un mensaje*/


#include <stdio.h>

int main() {

   int i;
   float num, negativos;

    negativos = 0;

    for ( i=1 ; i <20 ; i++ )
    {
        printf( "\nIntroduzca un n%cmero entero %i: ", 163, i);
        scanf("%f", &num );

        if (num<0)
            negativos++;
        else
            printf("");
    }

    printf( "\nSe ha(n) introducido %.0f n%cmero(s) negativos.", negativos, 163);

    return 0;

};