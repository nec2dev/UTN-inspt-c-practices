/*36.Dados 3 números, mostrarlos por pantalla en orden
creciente.*/

#include <stdio.h>

int main(){
     
    float num1, num2, num3, pos1, pos2, pos3;
 
    printf("Ingrese tres numeros cualquiera\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    if(num1<=num2&&num1<=num3)
        pos1=num1;    
    else if(num2<=num1&&num2<=num3)
        pos1=num2;
    else if(num3<=num2&&num3<=num1)
        pos1=num3;
    
    if(num1<=num2&&num1>=num3)
        pos2=num1;    
    else if(num2<=num1&&num2>=num3)
        pos2=num2;
    else if(num1<=num2&&num1>=num3)
        pos2=num2;

    if(num1>=num2&&num1>=num3)
        pos3=num1;    
    else if(num2>=num1&&num2>=num3)
        pos3=num2;
    else if(num1>=num2&&num1>=num3)
        pos3=num2;

    printf("%.2f, %.2f, %.2f", pos1, pos2, pos3);

    return(0);
}
