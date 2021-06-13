/*Tipea el siguiente programa que utiliza la sentencia 
condicional if y sigue la traza para observar su 
funcionamiento. Usa el depurador y observa los valores 
de las variables del programa.*/


main(){
    int valor, resultado;
    printf("Introduce un numero entero:");
    scanf("%d",&valor);
    /*a)Sustituye la expresión que da valor a la variable resultado 
    por esta otra: valor%7.¿Cuándo se ejecuta el primer printf y 
    cuándo el segundo? Modifica el mensaje de los  printf para que
    el programa sea coherente con el comportamiento de la sentencia if.
    Puedes usar el depurador para observar el valor que adquiere la 
    variable resultado para diferentes números introducidos por teclado
    en la variable valor.*/
    resultado = valor%2; 
    if (resultado)
    printf("El numero introducido era IMPAR");
    else
    printf("El numero introducido era PAR");
    //resultado = valor%7;
    resultado = valor%7; 
    if (resultado)
    printf("");
    else
    printf("");
    //b) Ídem para la expresión: valor>=0 && valor<10
    if (valor>=0 && valor<10)
    printf("");
    else
    printf("");
    //c)Ídem para la expresión: valor%2==0 && valor>10
    if (valor%2==0 && valor>10)
    printf("");
    else
    printf("");
    //d) Ídem para la expresión: valor%2==0 || valor>10
    if (valor%2==0 || valor>10)
    printf("");
    else
    printf("");
    //e) Ídem para la expresión:  !(valor%2!=0 && valor<=10)
    if (!(valor%2!=0 && valor<=10))
    printf("");
    else
    printf("");
    
return(0);
}
