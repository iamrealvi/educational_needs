#include <stdio.h>

int main() {
  double a,b;
  scanf("%lf%lf", &a, &b);
  double res = (b * 0.0254) + (a * 0.3048);
  printf("%.0lf'%.0lf\" = %.2lfm.", a, b, res);

  return 0;
}
