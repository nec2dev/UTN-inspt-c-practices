/*11. Evaluar las siguientes expresiones. Siendo: 
x = 10;  y = 20;  z = 30; 
b) (x < 10) && (y > 15) 
c) (x <= z) || (z <= y) 
d) !(x+y < z) */
#include <stdio.h>

int main() {
   int x=10,y=20,z=30;

    if ((x < 10) && (y > 15)){
        printf("b) es: true\n");
    }
    else{
        printf("b) es: false\n");
    }

    if ((x <= z) || (z <= y)){
        printf("c) es: true\n");
    }
    else{
        printf("c) es: false\n");
    }

    if (!(x+y < z)){
        printf("d) es: true\n");
    }
    else{
        printf("d) es: false\n");
    }

    return 0;

};