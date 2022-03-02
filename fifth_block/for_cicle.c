#include <stdio.h>

int main() {
    int a;
    int res = 1;
    scanf("%d", &a);
    if (a == 0) {
        printf("1");
    } else {
        for (int i = 1; i <= a; i++) {
        res = res * i;
        if (i == a)
            printf("%d", res);
        }
    }
    
    return 0;
}
