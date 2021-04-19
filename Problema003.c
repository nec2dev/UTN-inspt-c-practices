#include <stdio.h>
int main() {

    float purchaseAmount;
    char wayToPay;
   
   printf("Por favor, Ingrese el valor de la compra\n");
   scanf("%f", &purchaseAmount);
   printf("Ahora, ingrese la forma de pago\n");
   fflush(stdin);
   scanf("%c", &wayToPay);
   
    float cashPaymentDiscount(float purchaseAmount){
        float wayToPayA = purchaseAmount-(purchaseAmount*0.15);
        return wayToPayA;
     };

    float cardPaymentOneFee(float purchaseAmount){
        float wayToPayB = purchaseAmount+(purchaseAmount*0.1);
        return wayToPayB;
     };

    float cardPaymentThreeFees(float purchaseAmount){
        float wayToPayC = purchaseAmount+(purchaseAmount*0.2);
        return wayToPayC;
     };

     float cardPaymentTwleveFees(float purchaseAmount){
        float wayToPayD = purchaseAmount;
        return wayToPayD;
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
   else if (wayToPay =='d'){
       printf("Pago con tarjeta en doce cuotas\n");
       printf("Debe pagar un total de: $ %.2f\n", cardPaymentTwleveFees(purchaseAmount));
       printf("Cada cuota es de: $ %.2f\n", purchaseAmount/12);
   }
   else{
       printf("Ha ingresado un valor no válido\n");
   };

   system(pause);
   return 0;

};