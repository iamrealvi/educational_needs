#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if ((number % 2) == 0)
        printf("0");
    else
        printf("1");

    return 0;
}