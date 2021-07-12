/*1.Escribir una función que reciba un int y emita un mensaje indicando 
si es el valor positivo o no.La funcion no retorna dato, es void. 
Usarla en una main para indicar si números ingresados son positivos o no.*/

void ispositive(int num){
    if(num>0){
        printf("El numero ingresado es positvo");
    }else{
        printf("El numero ingresado no es positvo");
    }
}

int main (){

    int num, aux;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);

    ispositive(num);

    return 0;
}