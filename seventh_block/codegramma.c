#include <stdio.h>

int main() {
    int a = 0;
    int res = 0;
    int another_res = 0;

    while (a != -9999) {
        scanf("%d", &a);
        if (a == 2517)
            another_res = 1;

        if (another_res == 1 && a != -9999 && a != 2517) {
            res = a;
            printf("%d ", res);
        }
    }

    return 0;
}
