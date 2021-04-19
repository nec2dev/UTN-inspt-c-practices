#include <stdio.h>
int main() {

    float purchaseAmount, wayToPayA, wayToPayB, wayToPayC;
    char wayToPay;
   
   printf("Por favor, Ingrese el valor de la compra\n");
   scanf("%f", &purchaseAmount);
   printf("Ahora, ingrese la forma de pago\n");
   fflush(stdin);
   scanf("%C", &wayToPay);
   
    float cashPaymentDiscount (float purchaseAmount){
        wayToPayA = purchaseAmount-(purchaseAmount*0.15);
        return wayToPayA;
     };

    float cardPaymentOneFee (float purchaseAmount){
        wayToPayB = purchaseAmount+(purchaseAmount*0.1);
        return wayToPayB;
     };

    float cardPaymentThreeFees (float purchaseAmount){
        wayToPayC = purchaseAmount+(purchaseAmount*0.2);
        return wayToPayC;
     };

   if(wayToPay =='a'){
       printf("Pago al contado\n");
       printf("Debe pagar un total de: $ %.2f\n", cashPaymentDiscount(purchaseAmount));
   }
   else if(wayToPay =='b'){
       printf("Pago con tarjeta en una cuota\n");
       printf("Debe pagar un total de: $ %.2f\n", cardPaymentOneFee(purchaseAmount));
   }
   else if(wayToPay =='c'){
       printf("Pago con tarjeta en tres cuotas\n");
       printf("Debe pagar un total de: $ %.2f\n",cardPaymentThreeFees(purchaseAmount));
       printf("Cada cuota es de: $ %.2f\n", cardPaymentThreeFees(purchaseAmount)/3);
   }
   else {
       printf("Pago con tarjeta en doce cuotas\n");
       printf("Debe pagar un total de: $ %.2f\n", purchaseAmount);
       printf("Cada cuota es de: $ %.2f\n", purchaseAmount/12);
   }

   return 0;
};