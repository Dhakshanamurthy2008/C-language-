#include <stdio.h>
int main(){
int i,j,n;
printf("enter pattern rows:");
scanf("%d",&n);
for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
    if(i==1||i==3
    ||j==1
    ||j==5){
    printf("*");
    }
    else{
    printf(" ");
    }
    }
    printf("  ");
    for(j=1;j<=n;j++){
    if(i==1||i==3||j==1||j==5&&i<=3||j==3&&i==4||j==4&&i==5){
    printf("*");
    }
    else{
    printf(" ");
    }
    }
    printf("  ");
    for(j=1;j<=n;j++){
    if(j==1||i==5
    ||j==5){
    printf("*");
    }
    else{
    printf(" ");
    }
    }
    printf(" ");
    for(j=1;j<=n;j++){
    if(j==1||j==5||i==j){
    printf("*");
    }
    else{
    printf(" ");
    }
    }
    printf("\n");
    }
    return 0;
}