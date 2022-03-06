#include <stdio.h>

int main() {

    int a = 1;
    int zero_found = 0;
    int res = 0;

    while (a != -9999) {
        scanf("%d", &a);
        if (a == 0) {
            zero_found++;
        }
        if (zero_found == 1 && zero_found != 2) {
            res += a;
        }
    }
    printf("%d", res);

    return 0;
}