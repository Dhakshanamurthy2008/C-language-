#include<stdio.h>
int main()
{
int i,n,count,j;
printf("enter the number:");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
count=0;
for(i=1;i<=j;i++)
{
if(j%i==0)
{
count++;
}
}
if(count==2)
{
printf("%d prime\n",j);
}
}







}
