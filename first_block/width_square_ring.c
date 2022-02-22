#include <stdio.h>

int main() {
  int radius_in, radius_out;
  double ring_sq_out, ring_sq_in;
  double pi = 3.14159265358979323846;
  scanf("%d%d", &radius_in, &radius_out);

  ring_sq_out = pi * radius_out * radius_out;
  ring_sq_in = pi * radius_in * radius_in;
  int ring_width = radius_out - radius_in;
  double ring_sq_gk = (ring_sq_out - ring_sq_in) * 100;
  printf("%d %.2lf", ring_width, ring_sq_gk);
  return 0;
}