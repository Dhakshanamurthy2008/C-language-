#include <stdio.h> 
int main()
{ 
  int n = 153, temp, sum = 0, r; temp = n; 
  while(n > 0)
  {
   r = n % 10; 
  sum += r * r * r; 
  n /= 10; 
  } 
  if(temp == sum)
  { printf("%d Armstrong number", sum); 
  } 
  else{ printf("%d It is not a Armstrong number", sum); 
  } 
}