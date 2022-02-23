#include <stdio.h>

int main() {
    int a1,a2,a3,a4,a5;
    int q_e = 0;
    int q_n = 0;
    int res;
    scanf("%d%d%d%d%d", &a1,&a2,&a3,&a4,&a5);
    if (a1 % 2 == 0) {
        q_e++;
    } else {
        q_n++;
    }
    if (a2 % 2 == 0) {
        q_e++;
    } else {
        q_n++;
    }
    if (a3 % 2 == 0) {
        q_e++;
    } else {
        q_n++;
    }
    if (a4 % 2 == 0) {
        q_e++;
    } else {
        q_n++;
    }
    if (a5 % 2 == 0) {
        q_e++;
    } else {
        q_n++;
    }
    res = q_n - q_e;
    printf("%d", res);

    return 0;
}
