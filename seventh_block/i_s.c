#include <stdio.h>

int main() {
    int max = -9999;
    int res = 0;
    int neg = 0;
    int i = 0;
    int a = 0;

    while (a != -9999) {
        scanf("%d", &a);
        if (a == -9999) {
            break;
        } else {
            i++;
            if (a > max) {
                max = a;
                res++;
            } else {
                neg = i;
                break;
            }
        }   
    }

    if (neg == 0) {
        printf("0");
    } else {
        printf("%d", neg);
    }

    return 0;
}