#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    int k = a;
    for (int i = a; i <= b; i++) {
        for (int i = a; i <= k; i++) {
            printf("%5d", k);
        }
        k++;
    }
    return 0;
}
