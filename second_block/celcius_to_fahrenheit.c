#include <stdio.h>

int main() {
  
    double a;
    double celcius;
    scanf("%lf", &a);
    celcius = (double)5 / (double)9 * (a - (double)32);
    printf("%.2lf", celcius);

  return 0;
}
