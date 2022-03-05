#include <stdio.h>

int main(void) {
    int number, stepen;
    int res = 1;

    scanf("%d%d", &number, &stepen);

    while(stepen > 0) {
        res *= number;
        stepen--;
    }

    printf("%d\n", res);

    return 0;
}
