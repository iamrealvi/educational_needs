#include <stdio.h>

int main() {
    int max = -9999;
    int res = 0;
    int i = 0;
    int a = 0;

    while (a != -9999) {
        scanf("%d", &a);
        i++;
        if (a > max) {
            max = a;
            res++;
        }
    }

    if (i - 1 != res) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}