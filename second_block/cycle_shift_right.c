#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int b,c;
    b = a / 10;
    c = a % 10;
    printf("%d%d",c,b);

    return 0;
}
