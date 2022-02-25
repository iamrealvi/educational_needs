#include <stdio.h>

int main() {
  
  int a;
  int res_a, res_b, res_c, res_d;
  scanf("%d", &a);
  res_a = ((a % 10) + 10 - 7) % 10;  // last digit
  res_b = (((a / 10) % 10) + 10 - 7) % 10;  // pre-last digit
  res_c = (((a / 100) % 10) + 10 - 7) % 10;  // second digit
  res_d = ((a / 1000) + 10 - 7) % 10;  // first digit

  printf("%d%d%d%d", res_b, res_a, res_d, res_c);

  return 0;
}
