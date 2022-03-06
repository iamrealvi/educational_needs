#include <stdio.h>

int main() {
    int a;
    int b;
    int i = 1;
    int max = -9999;
    scanf("%d", &a);
    while (i <= a) {
        scanf("%d", &b);
        if (b > max) {
            max = b;
            printf("%d ", max);
        }
        i++;
    }

    return 0;
}
