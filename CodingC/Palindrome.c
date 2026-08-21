#include <stdio.h>
int main(){ 
int n = 121,temp,rev=0,r; temp = n;
 while(n > 0)
 { r = n%10; 
 rev = rev * 10 + r; 
 n /= 10; } 
 if(rev == temp)
 { printf("%d Palindrome number",rev);
 }
  else{ printf("%d It is not a Palindrome number",rev); 
  }
  }