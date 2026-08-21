//Smart Payment Wallet
#include<stdio.h>
#include<string.h>
struct Payment{
   int transactionID;
   char name[30];
   float amount;
   int type;

union {
   char upiId[30];
   char cardNumber[20];
   float cashAmount;
 }payment;
};

int main(){
   struct Payment p;
   printf("********Smart Payment Wallet*********\n\n");

   printf("Enter Transaction ID:");
   scanf("%d",&p.transactionID);

   printf("\nEnter customer Name:");
   scanf("%s",&p.name);

   printf("\nEnter the Amount:");
   scanf("%f",&p.amount);

   printf("\nSelect the payment maethod\n");
   printf("1) UPI\n2) Card\n3) Cash\n");
   printf("Enter your choice:");
   scanf("%d",&p.type);
   switch (p.type){
        case 1:
              printf("Enter your UPI ID:");
              scanf("%s",&p.payment.upiId);
              break;
        case 2:
              printf("Enter your Card Number:");
              scanf("%s",&p.payment.cardNumber);
              break;
        case 3:
              p.payment.cashAmount = p.amount;
              break;
        default :
            printf("Invalid payment method");
            break;
   }

   printf("\n##########Payment Receipt###########\n");
   printf("Transaction ID:%d\n",p.transactionID);
   printf("Customer Name:%s\n",p.name);
   printf("Amount:%.2f\n",p.amount);

   switch (p.type){
      case 1:
         printf("Payment type:UPI\n");
         printf("UPI ID:%s\n",p.payment.upiId);
         break;
      case 2:
         printf("Payment type:CARD\n");
         printf("Card:%s\n",p.payment.cardNumber);
         break;
       case 3:
         printf("Payment type:CARD\n");
         printf("Card:%s\n",p.payment.cashAmount);
         break;
       default :
            printf("Invalid payment method");
            break;

   }
}
