#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    int k = a;
    for (int i = a; i <= b; i++) {
        for (int i = a; i > 0; i--) {
            printf("%4d", a);
        }
        a++;
    }
    return 0;
}
