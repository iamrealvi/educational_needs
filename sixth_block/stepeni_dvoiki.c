#include <stdio.h>
#include <math.h>

int main() {
    int a = 0;
    float i = 1;
    scanf("%d", &a);
    while(pow(2, i) < a) {
        i++;
    }
    printf("%0.lf ", i);
    return 0;
}
