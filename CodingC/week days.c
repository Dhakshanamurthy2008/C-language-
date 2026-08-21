#include<stdio.h>
enum weekdays {SUN, MON, TUES, WED, THRU, FRI, SAT};

int main() {
    enum weekdays today = SUN;
    
    switch (today) {
        case SUN:
            printf("IT'S A FUN DAY");
            break;
            
        case MON:
        case TUES:
        case WED:
        case THRU:
        case FRI:
            printf("IT'S A WORKING DAY");
            break;
        default:
            printf("enter the day properly:");    
    }
    
    return 0;
}