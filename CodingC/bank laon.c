#include<stdio.h>
int main()
{
int Husband_salary;
int Husband_age;
int Wife_salary;
int Wife_age;
printf("husband salary:\n");
scanf("%d",&Husband_salary);
printf("husband age:\n");
scanf("%d",&Husband_age);
printf("wife salary:\n");
scanf("%d",&Wife_salary);
printf("wife age:\n");
scanf("%d",&Wife_age);
if(Husband_salary>=100000)
{
if(Wife_salary>=50000)
{
if(Husband_age>=30)
{
if(Wife_age>=25)
{
printf("loan sanction");
}
else
{
printf("loan not sanction ");
 printf("reason:wife age");
}
}
else
{
printf("laon not sanction");
printf("reason:husband age");
}
 }
else
{
printf("laon not sanction");
printf("reason:wife salary");
}
 }
else
{
printf("laon not sanction");
printf("reason:husban salary");
}
}

