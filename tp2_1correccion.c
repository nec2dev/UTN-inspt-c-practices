/*1) a) Nos presentamos en el cajero de un banco el cual tiene únicamente 
un teclado de 9 dígitos y un botón verde de confirmación. Luego de 
ingresar nuestra clave (esto no lo tendremos en cuenta) nos ofrece 4 
opciones que se activan según la siguiente tabla  
1- Sacar Dinero  
2- Depositar Dinero  
3- Consultar Saldo  
4- Cambiar la clave  
Se pide hacer un algoritmo que permita seleccionar alguna de las 4 
opciones y simule la siguiente operatoria:  
- En caso de sacar dinero, se preguntará si se desea extraer en pesos 
o dólares (opción 1 y 2 respectivamente) y luego el importe deseado.  
- Si se desea depositar dinero el algoritmo deberá solicitar el importe 
nicamente en pesos  
- En caso de consulta de Saldo, consultar si quiere ver el de "Caja de 
ahorro" o "Cuenta Corriente" (opciones 1 y 2 respectivamente)  
- En caso de cambio de clave, solicitar la vieja clave y la nueva 
(obviamente son números) y avisar si la misma es repetida (o sea el nuevo 
igual a la vieja)  
b) Deseo que el menú siga mostrándose después de cada operatoria para lo 
cual implementar lo necesario para que se mantenga el menú y pueda elegir 
cualquier operatoria del cajero hasta que seleccione la opción 5-Salir  
c) Ahora realizar lo siguiente tener presente si ingresamos una clave 
correcta se ingresa al menú y el número de intentos es menor que 3, y en 
cambio sí se supera la cantidad de intentos supero los 3 intentos se emite 
un mensaje "clave incorrecta. Diríjase a su banco emisor". */

#include <stdio.h>

int main(){

	float deposit, extract, amountch=100000, amountchcc=25000;
	int pin, newpin=0, userpin=9999, menuselection, attempts=0, typecurrency;

		printf("Por favor, ingrese su PIN:\n");
		scanf("%i", &pin);	

		while(pin!=userpin&&attempts<2&&menuselection!=5){
			printf("La clave que ingres%c no es correcta\n", 162);	
		    printf("Por favor, ingrese su PIN:\n");
			scanf("%i", &pin);
			attempts++;
		}

		while(pin==userpin&&menuselection!=5){

			do{	
			printf("1-Sacar Dinero.\n2-Depositar Dinero.\n3-Consultar Saldo.\n4-Cambiar la clave.\n5-Salir\n");
			scanf("%i", &menuselection);

			switch (menuselection){

			case 1:
				printf("Elija el tipo de cambio para la extracci%cn:\n",162);
				printf("1-Pesos\n2-d%clares\n", 162);
				scanf("%i", &typecurrency);
				printf("Ingrese el monto a retirar:\n");
				scanf("%f", &extract);
				if(typecurrency==2){
					extract=extract*160;
				}
				if(extract>(amountch-500)){
					printf("Saldo insuficiente.\n");
				}
				else{
					amountch=amountch-extract;
					printf("Por favor, retire su dinero en efectivo.\n");
					printf("Tu saldo actual es de: $ %.2f\n", amountch);
				} break;

			case 2:
				printf("Ingrese la cantidad para depositar (solo acepta pesos):\n");
				scanf("%f", &deposit);
				amountch=amountch+deposit;
				printf("Tu saldo actual es de $ %.2f\n", amountch); break;

			case 3:
				printf("Elija el tipo de cambio para la extracci%cn:\n",162);
				printf("1-Caja de Ahorro\n2-Cuenta Corriente\n");
				scanf("%i", &typecurrency);
				if(typecurrency==1){
				printf("Saldo actual Caja de Ahorro: $ %.2f\n", amountch);
				}if(typecurrency==2){
				printf("Saldo actual Cuenta Corriente $ %.2f\n", amountchcc);} 
				else{
					printf("No es posible la operaci%cn\n", 162);
				}break;

			case 4:
				printf("Para cambiar el PIN ingrese el PIN actual\n"); 
				scanf("%i", &newpin);
				if(newpin==pin){
					printf("Ingrese su nuevo pin\n");
					scanf("%i", &pin);
					printf("Su nuevo PIN se ha guardado con exito\n");
					userpin=pin;
				}else{
					printf("La clave que ingres%c no es correcta\n", 162);
				}
				break;

			case 5:
				printf("Gracias por usar el cajero autom%ctico!\n", 160); 
				break;//Ver salida del switch

			default:
				printf("No es posible la operaci%cn\n", 162);	
			}
			}while(menuselection==1||menuselection==2||menuselection==3||menuselection==4);
	}
	printf("clave incorrecta. Dir%cjase a su banco emisor", 161);
	return 0;
}
	

	
