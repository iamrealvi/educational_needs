#include <stdio.h>

int main() {
    int a;
    float rad;
    float pi = 3.1415926;
    scanf("%d", &a);

    rad = (a * pi) / 180;
    printf("%.2f", rad);
    return 0;
}