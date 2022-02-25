#include <stdio.h>
#include <math.h>

int main() {
  float k;
  float n;
  float T = 5570;
  float lambda = log(2) / T;
  float n_o = 7.5 * pow(10, 10);
  scanf("%f", &k);

  n = (n_o * exp(-lambda * k)) / 1000000000;

  printf("%.2f", n);

  return 0;
}
