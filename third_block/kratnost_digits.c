#include <stdio.h>

int main() {
  
  int a,b,c;
  int res, sec_res;
  scanf("%d%d%d", &c, &b, &a);
      res = b % c;
      sec_res = a % c;
      printf("%d %d", res, sec_res);
  return 0;
}
