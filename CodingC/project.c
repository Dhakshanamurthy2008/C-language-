#include <stdio.h>

// Struct definition based on the variables used in the main function
struct Payment {
    int transactionID;
    char name[50];
    float amount;
    int type;
    union {
        char upiId[50];
        // You can add card or cash details here if needed later
    } payment;
};

int main() {
    struct Payment p;
    
    printf("*********Smart Payment Wallet*********\n\n");
    
    printf("Enter Transaction ID:");
    scanf("%d", &p.transactionID);
    
    printf("\nEnter customer Name:");
    scanf("%s", p.name); // Removed '&' because p.name is an array
    
    printf("\nEnter the Amount:");
    scanf("%f", &p.amount);
    
    printf("\nSelect the payment method\n");
    printf("1) UPI\n2) Card\n3) Cash\n");
    printf("Enter your choice:");
    scanf("%d", &p.type);
    
    switch (p.type) {
        case 1:
            printf("Enter your UPI ID:");
            scanf("%s", p.payment.upiId); // Removed '&' because upiId is an array
            break;
            
        // You can add case 2 and case 3 below as your project expands
    }
    
    return 0;
}    