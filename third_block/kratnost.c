#include <stdio.h>

int main() {
  
  int a,b;
  int res;
  scanf("%d%d", &a, &b);
  if (a % b == 0) {
      printf("0");
  } else {
      res = a % b;
      printf("%d", res);
  }
  return 0;
}
