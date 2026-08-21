//tour program
#include<stdio.h>
int  main(){
    int tour,saving;
    printf("Enter your saving amount:");
    scanf("%d",&saving);
    if(saving>=150000){
        printf("tour for two countries: Singapore & Paris");
    }
    else{
        printf("Insufficient savings,so you  sit in the home");
    }
}