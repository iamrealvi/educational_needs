#include <stdio.h>

int main() {
    int a;
    int res;
    int k = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            k++;
            printf("%d ", i);
        }
    }
    printf("\n%d", k);
    return 0;
}
