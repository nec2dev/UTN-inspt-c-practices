#include <stdio.h>

int main(){

	float deposit, extract, amount=100000;
	int menuselection, pin, attempts=0, k;
	char transaction ='s';

	while (pin != 9999&&attempts<3){
		printf("Por favor, ingrese su PIN:\n");
		scanf("%i", &pin);
		attempts++;
		if (pin != 9999)
		printf("La clave que ingres%c no es correcta\n", 162);
		}do{
			printf("clave incorrecta. Dir%cjase a su banco emisor", 161);
		}
		printf("1-Sacar Dinero.\n2. Depositar Dinero.\n2-Consultar Saldo.\n4. Cambiar la clave.\n");
		scanf("%d", &menuselection);
		switch (menuselection){
		case 1:
			printf("\n Ingrese el monto a retirar:\n");
			scanf("%f", &extract);
			if (extract >(amount - 500)){
				printf("\n Saldo insuficiente.");
			}
			else{
				amount = amount - extract;
				printf("\n\n Por favor, cobrar dinero en efectivo.");
				printf("\n Tu saldo actual es %f", amount);
			} break;
		case 2:
			printf("\n Ingrese la cantidad para depositar:\n");
			scanf("%f", &deposit);
            amount = amount + deposit;
			printf("Tu saldo es %f", amount); break;
		case 3:
			printf("\n Tu balance en S/%f ", amount); break;
		case 4:
			printf("\n Gracias por usar el cajero automático!"); break;
		default:
			printf("\n Elección inválida");
		}
		printf("\n\n\n ¿Desea realizar otra transacción?(s/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction=='n'||transaction=='N')
                    k = 1;
	} while (!k);
	printf("\n\n Gracias por utilizar el servicio del cajero automático!");
	
