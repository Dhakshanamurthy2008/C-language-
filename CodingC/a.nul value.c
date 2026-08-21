#include<stdio.h>
int main()
{
    int i,j;
    printf("enter the rows and columns:");
    scanf("%d",&i,&j);
    int a[2][3]={{1,3},{2,-3,4}};
    for(i=0;i<2;i++)
   
    {
        for(j=0;j<3;j++){
         if(a[i][j] !=0)
           {
              printf("%d",a[i][j]);
              printf("   ");
           }
           
           
    }
    printf("\n");
        
}

    
}