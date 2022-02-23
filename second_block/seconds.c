#include <stdio.h>

int main() {
    int a;
    int res;
    scanf("%d", &a);
    res = a % (60 * 60);
    printf("%d", res);

    return 0;
}
