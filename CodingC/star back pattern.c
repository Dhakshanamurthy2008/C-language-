#include<stdio.h>
int main(){
 int i,j,row;
 printf("enter the row:");
 scanf("%d",&row);
 for(i=1;i<=row;i++){
     for(j=1;j<=row;j++){
       if((i+j)<=row){
        printf(" ");
       }
       else{
        printf("*");
       } 
     }
     printf("\n");
 }
}