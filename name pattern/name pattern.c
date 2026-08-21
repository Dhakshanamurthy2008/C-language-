#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter pattern rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++){
         if(i==1&&j<=4||j==5&&(i>=2&&i<=4)||
         i==5&&j<=4||j==2){
             printf("* ");
         }
         else{
             printf("  ");
         }
     }
     
      printf("  ");
        for(j=1;j<=n;j++){
          if(i==3||j==1||j==5){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }  
        
      printf("  ");
        for(j=1;j<=n;j++){
          if(i==1&&j==3|| i==3 || i>3&&j==1|| i==5&&j==5||
          i==2&&j==2||i==2&&j==4||j==5 && i>3){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
        printf(" ");
       for(j=1;j<=n;j++){
         if(j==1||j==5&&i>=3||i==3||(i+j)==(n+1)&&i<=3){
             printf("* ");
         }
         else{
             printf("  ");
         }
     }
     
     
     printf(" ");
    for(j=1;j<=n;j++){
    if(i==1||i==3||i==5
    ||j==1&&i<3
    ||j==5&&i>3){
    printf("* ");
    }
    else{
    printf("  ");
    }
    }
        printf(" ");
        for(j=1;j<=n;j++){
          if(j==1||j==5||i==3){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
        printf("  ");
        for(j=1;j<=n;j++){
          if(i==1&&j==3|| i==3 || i>3&&j==1||
           i==5&&j==5||i==2&&j==2||i==2&&j==4||j==5 && i>3){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
         printf("  ");
        for(j=1;j<=n;j++){
          if(j==1||j==5||i==j){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
       printf("  ");
        for(j=1;j<=n;j++){
          if(i==1&&j==3|| i==3 || i>3&&j==1|| 
          i==5&&j==5||i==2&&j==2||i==2&&j==4||j==5 && i>3){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
        printf("\n");
        }
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            // M pattern
            if(j==1|| j==5 || j==i && i <= 3 ||
             (i+j) == (n+1) && i <= 3){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        
        
        printf("  ");
        for(j=1;j<=n;j++){
          if(j==1||j==5||i==5){
             printf("* ");
          }
          else {
             printf("  ");
          }
        }
        printf(" ");
        for (j = 1; j <= n; j++) {
    // R pattern
            if (j == 1 || i == 1 || i == 3 || j == 5 &&
             i <= 3 || i == j && i >= 3) {
                printf("* ");
    }
            else {
                printf("  ");
    }
    }
        printf("   ");
    for(j=1;j<=n;j++) {
        // T pattern
        if( i==1 || j==3 ){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("   ");
    for(j=1;j<=n;j++){
        // H pattern
        if( j==1 || j==5 || i==3 ){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("   ");
    for(j=1;j<=n;j++){
        // Y pattern
        if( j==3 && i>=3 || i==j && i<=3 ||
         (i+j)==(n+1) && i<=3 ){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
      printf("\n");
    }
}