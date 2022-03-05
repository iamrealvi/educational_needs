#include <stdio.h>

int main() {
    int a,b;
    int res;
    int aboba;

    scanf("%d%d", &a, &b);
    aboba = a * b;

    while (a != 0 && b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }

    res = aboba / (a + b);
    printf("%d", res);

    return 0;
}
