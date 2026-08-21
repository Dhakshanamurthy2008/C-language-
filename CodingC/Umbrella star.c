#include<stdio.h>
int main()
{
 int i,j,row;
 printf("enter the row:");
 scanf("%d",&row);
 for(i=5;i<=row;i++){
     for(j=1;j<=row;j++){
       if((i+j)<=row){
        printf(" ");
       }
       else{
        printf("* ");
       } 
     }
     printf("\n");
 }
     for(i=row-1; i>=1;i--){
       for(j=1;j<=row-1;j++){
           printf(" ");
       }
         for(int k=1;k<=1;k++){
           printf("* ");
         }
           printf("\n");
 }   
 }       