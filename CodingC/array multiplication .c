#include<stdio.h>
int main() {
     int r,c;
     printf("enter the rows and columns:");
     scanf("%d%d",&r ,&c);
     int a[r][c],b[r][c],C[r][c],i,j;
     printf("enter elements of matrix a:\n");
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
         } 
     }
     printf("enter elements of matrix b:\n");
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
         } 
     }
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
            C[i][j]=a[i][j]*b[i][j];
         } 
     }
     printf("sum of the two matrices:\n");
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
            printf("%d ",C[i][j]);
         }
         printf("\n");
     }
     return 0;
}