#include<stdio.h>
int main()
{
int jar =10 ,a=0,b=0,c=0;
for(int i=1;i<=jar;i++)
{
if(i%3==1)
{
a++;
}
else if(i%3==2)
{
b++;
}
else
{
c++;
}
}
printf("A student got:%d\n",a);
printf("B student got:%d\n",b);
printf("C student got:%d\n",c);
}
