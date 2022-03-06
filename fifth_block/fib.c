#include <stdio.h>

int fib(int N);

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", fib(N));

    return 0;
}

int fib(int N) {
    if (N == 1 || N == 2)
        return 1;
    return fib(N - 1) + fib(N - 2);
}
