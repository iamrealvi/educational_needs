#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d", &m, &n);
    int res;
    double num;
    int hello;
    res = (m / n) % 10;
    num = ((double)m / (double)n * (double)10);
    hello = (int)num % 10;
    printf("%d %d", res, hello);

    return 0;
}
