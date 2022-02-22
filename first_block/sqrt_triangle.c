#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double pi = 3.141593;
    double rad; 

    scanf("%lf%lf%lf", &a, &b, &c);
    rad = (c / 180) * pi;
    double d = (0.5 * (a * b));
    double e = d * sin(rad);

    printf("%.2lf\n", e);
    
  return 0;
}
