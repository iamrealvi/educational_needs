#include <stdio.h>

int main() {

    int a;
    int res;
    scanf("%d", &a);

    while (a > 0) {
        res = a % 10;
        printf("%d", res);
        a /= 10;
    }

    return 0;
}
