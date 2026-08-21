#include<stdio.h>
int main()
{
  int i,n=10,sum=0;
  for(i=1;i<=n;i++)
    {
     if(i==6)
       {
       break;
       }
     sum+=i;
    } 
    printf("%d",sum);
       
}