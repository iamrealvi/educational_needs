#include <stdio.h>

int main() {
  int a,b,c;
  int res;
  int sum;
  scanf("%d%d%d", &a, &b, &c);
  sum = b + c;
  if (sum > a) {
      res = (c + b) % a;
      printf("%d", res);
  } else {
      res = c + b;
      printf("%d", res);
  }

  return 0;
}
