#include <stdio.h>
int main() {
int ch, qty;
char order='y';
float bill=0;
printf("**********Arun HOTEL**********\n");
printf("MENU CARD\n");
printf("1)chicken 65\n2)mutton biryani\n");
printf("3)chicken biryani\n4)mandhi biryani\n");

do{
    printf("Enter your order:");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
            printf("Enter your quantity:");
            scanf("%d",&qty);
            bill+=(qty*80);
            break;
        case 2:
            printf("Enter your quantity:");
            scanf("%d",&qty);
            bill+=(qty*180);
            break;
        case 3:
            printf("Enter your quantity:");
            scanf("%d",&qty);
            bill+=(qty*150);
            break;
        case 4:
            printf("Enter your quantity:");
            scanf("%d",&qty);
            bill+=(qty*80);
            break;
        default:
            printf("Your order is invalid");
            break;
}

    printf("\nDo you want to order again Y/N:");
    scanf("%s",&order);
}while(order=='y' || order=='Y');

printf("\nYour total bill=%f",bill);

printf("\n*******THANK YOU**********");

return 0;
}