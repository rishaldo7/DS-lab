#include <stdio.h>

int power(int a, int n) 
{
  if (n == 0) 
  {
    return 1;
  } 
  else 
  {
    return a * power(a, n - 1);
  }
}

int main() 
{
  int a, n;
  printf("Enter the number - ");
  scanf("%d",&a);
  printf("Enter the power - ");
  scanf("%d",&n);
  printf("%d raise to %d is equal to %d",a,n,power(a, n));
  return 0;
}