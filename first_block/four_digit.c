#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  double first, second, third;
  double result;
  first = k % 10;
  k /= 10;
  second = k % 10;
  k /= 10;
  third = k % 10;
  k /= 10;
  result = (second * (double)k) / (first * third);

  printf("%.2lf", result);
  return 0;
}
