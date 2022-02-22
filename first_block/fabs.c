#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double res;

    scanf("%d%d", &a, &b);
    
    res = a - b;

    printf("%.0lf", fabs(res));
    return 0;
}