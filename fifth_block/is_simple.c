#include <stdio.h>

int main() {
    int a;
    int res = 0;
    scanf("%d", &a);
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            res++;
        }
    }
    if (res == 0) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
