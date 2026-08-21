#include <stdio.h> 
int main() {
 int n; int r; 
 int sum = 0;
 printf("Enter an integer: "); 
 scanf("%d", &n); 
 while (n > 0) 
 { 
 r = n % 10; 
 sum = sum + r; n /= 10; 
 } 
 printf("Sum of digits = %d\n", sum); 
 return 0; 
 }