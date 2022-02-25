#include <stdio.h>
#include <math.h>

int main() {
  double h;
  double density_o;
  double density;
  double z;
  scanf("%lf", &h);
  density_o = 1.29;
  z = 0.000125;
  density = exp(-h*z) * density_o;

  printf("%.2lf", density);

  return 0;
}
