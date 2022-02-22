#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int N;
    srand(time(NULL));
    scanf("%d", &N);
    printf("%d", rand() % (N + 1));
    return 0;
}
