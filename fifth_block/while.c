#include <stdio.h>

int main() {
  int a = 1;
  int res = 0;
  int max = -9999;
  int min = 9999;
  while (a != 0) {
      scanf("%d", &a);
      if (a == 0)
      break;
      if (a < min)
        min = a;

      if (a > max)
        max = a;
      res += a;
  }
  printf("%d %d", max, min);
  return 0;
}
