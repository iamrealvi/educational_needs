#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int b,c,d;
    b = a / 10 % 10;
    c = a % 10;
    d = a / 100;
    printf("%d%d%d", b, c, d);

    return 0;
}
