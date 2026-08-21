#include<stdio.h>
int main()
{
int jar[50]={10,20,30},a=0,b=0,c=0,i,j,n;
n=jar[i];
for(int i=0;i<3;i++){
  for(j=1;j<=jar[i];j++){
  if(j%3==1)
  {
  a++;
  }
  else if(j%3==2)
  {
   b++;
  }
  else
  {
  c++;
  }
  }}
  printf("A student got:%d\n",a);
  printf("B student got:%d\n",b);
  printf("C student got:%d\n",c);
}