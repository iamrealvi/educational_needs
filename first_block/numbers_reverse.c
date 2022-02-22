#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  int first, second, third;
  first = k % 10;
  k /= 10;
  second = k % 10;
  k /= 10;
  third = k % 10;

  printf("%d%d%d", first, second, third);
  return 0;
}
