#include <stdio.h>

int fib(int n) {
  int a = 0, b = 1, c, i;
  for (i = 0; i < n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return a;
}

int main() {
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  printf(" fabonacci series is %d ", fib(n));
  return 0;
}