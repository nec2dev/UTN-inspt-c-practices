/*15.Escribir una funcion void Carga_Pri (int x, int *pos) que recibe un 
entero x y una dirección pos y carga en pos el número primo más cercano 
a x, que no seas inferio a él. Ejemplo: 
si se tiene int h=9; int b; y se invoca Carga_Pri (h; &b);
se carga en b el número primo 11, que es el primer primo mayor que 9.*/

#include <stdio.h>

void Carga_Pri(int x, int *pos){
    for(int i=1; i==x; i++){
        int primo=1;
        int contador=2;
        while (contador<=i/2 && primo){
            if(i%contador==0)
                primo = 0;
                contador++;
        }
        if(primo)
            pos=i;
    }
}

int main(){
    int x, *pos;
    printf("Ingrese un valor para x\n");
    scanf("%d", x);
    pos=0;
    Carga_Pri(x, *pos);
    printf("%d", pos);
    return(0); 
}