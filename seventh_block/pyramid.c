#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for(int k = 0; k <= a; k++) {
        for(int i = 1; i <= k; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
