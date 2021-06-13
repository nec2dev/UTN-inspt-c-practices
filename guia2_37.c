/*37.Dados 5 números, mostrarlos por pantalla en orden 
creciente..*/

#include <stdio.h>

int main(){
     
    float num1, num2, num3, num4, num5, aux;
 
    printf("Ingrese cinco numeros cualquiera\n");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    
    if(num5>num1){
        aux=num5;
        num5=num1;
        num1=aux;
    } 
    if(num1>num2){
        aux=num1;
        num1=num2;
        num2=aux;
    } 
    if(num1>num3){
        aux=num1;
        num1=num3;
        num3=aux;
    } 
    if(num1>num4){
        aux=num1;
        num1=num4;
        num4=aux;
    } 
    if(num1>num5){
        aux=num1;
        num1=num5;
        num5=aux;
    }
    if(num2>num3){
        aux=num2;
        num2=num3;
        num3=aux;
    } 
    if(num2>num4){
        aux=num2;
        num2=num4;
        num4=aux;
    } 
    if(num2>num5){
        aux=num2;
        num2=num5;
        num5=aux;
    } 
    if(num3>num4){
        aux=num3;
        num3=num4;
        num4=aux;
    } 
    if(num3>num5){
        aux=num3;
        num3=num5;
        num5=aux;
    } 
    if(num4>num5){
        aux=num4;
        num4=num5;
        num5=aux;
    }
        
    printf("%.2f, %.2f, %.2f, %.2f, %.2f", num1, num2, num3, num4, num5);

    return(0);
}