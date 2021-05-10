#include <stdio.h>
int main() {

    float purchaseamountch;
    char wayToPay;
   
   printf("Por favor, Ingrese el valor de la compra\n");
   scanf("%f", &purchaseamountch);
   printf("Ahora, ingrese la forma de pago\n");
   fflush(stdin);
   scanf("%c", &wayToPay);
   
    float cashPaymentDiscount(float purchaseamountch){
        float wayToPayA = purchaseamountch-(purchaseamountch*0.15);
        return wayToPayA;
     };

    float cardPaymentOneFee(float purchaseamountch){
        float wayToPayB = purchaseamountch+(purchaseamountch*0.1);
        return wayToPayB;
     };

    float cardPaymentThreeFees(float purchaseamountch){
        float wayToPayC = purchaseamountch+(purchaseamountch*0.2);
        return wayToPayC;
     };

     float cardPaymentTwleveFees(float purchaseamountch){
        float wayToPayD = purchaseamountch;
        return wayToPayD;
     };

   if(wayToPay =='a'){
       printf("Pago al contado\n");
       printf("Debe pagar un total de: $ %.2f\n", cashPaymentDiscount(purchaseamountch));
   }
   else if(wayToPay =='b'){
       printf("Pago con tarjeta en una cuota\n");
       printf("Debe pagar un total de: $ %.2f\n", cardPaymentOneFee(purchaseamountch));
   }
   else if(wayToPay =='c'){
       printf("Pago con tarjeta en tres cuotas\n");
       printf("Debe pagar un total de: $ %.2f\n",cardPaymentThreeFees(purchaseamountch));
       printf("Cada cuota es de: $ %.2f\n", cardPaymentThreeFees(purchaseamountch)/3);
   }
   else if (wayToPay =='d'){
       printf("Pago con tarjeta en doce cuotas\n");
       printf("Debe pagar un total de: $ %.2f\n", cardPaymentTwleveFees(purchaseamountch));
       printf("Cada cuota es de: $ %.2f\n", purchaseamountch/12);
   }
   else{
       printf("Ha ingresado un valor no válido\n");
   };

   return 0;

};