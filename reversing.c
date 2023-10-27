#include <stdio.h>

int reverse(int n) {
  if (n == 0) {
    return 0;
  } else {
    return (n % 10) + (reverse(n / 10) * 10);
  }
}

int main() {
  int n;
  printf("Enter the number to be reversed: ");
  scanf("%d", &n);
  printf("Reversed number is: %d", reverse(n));
  return 0;
}