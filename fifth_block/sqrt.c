#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    float a = 0;
    float res = 0;
    scanf("%f", &a);
    while (pow(i, 2) <= a) {
        res = pow(i, 2);
        printf("%.0f ", res);
        i++;
    }
    return 0;
}
