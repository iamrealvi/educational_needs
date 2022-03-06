#include <stdio.h>

int main() {
    int a;
    int positive = 0;
    int negative = 0;
    while (a != -9999) {
        scanf("%d", &a);

        if (a < 0 && a != -9999) {
            negative++;
        }

        if (a >= 0) {
            positive++;
        }
    }

    if (negative == 0 && positive == 0) {
        printf("NO");
    }

    if (negative > 0) {
        printf("NO");
    } 
    if (positive > 0 && negative <= 0) {
        printf("YES");
    }

    return 0;
}
