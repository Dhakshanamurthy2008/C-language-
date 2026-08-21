#include<stdio.h>
int main()
{
  int i,sum=0,v,n=5;
  for(i=1;i<=n;i++)
    {
    printf("enter the value:");
    scanf("%d",&v);
    if(v<0)
      {
       continue;
      }
    sum+=v;  
    }
  printf("sum:%d",sum);  
}    