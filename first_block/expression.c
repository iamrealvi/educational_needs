#include <stdio.h>

int main(void) {

    double a, b, c, d, e, f, h;
    double res;
    scanf("%lf%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f, &h);

    res = a / (b * c / (d * e / (f * h)));
    printf("%.2lf", res);

  return 0;
}
