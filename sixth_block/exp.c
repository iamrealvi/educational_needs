#include <stdio.h>

int main() {
    double input;
    double e = 1;
    double f = 1;
    double i = 1;
    double ex = 1;
    scanf("%lf", &input);

    while(ex >= input) {
        f *= i;
        ex = 1 / f;
        e += ex;
        i++;
    }
    printf("%.8lf", e);

    return 0;
}
