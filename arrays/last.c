#include <stdio.h>

int main() {
    int a;
    int k = 0;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++) {
        if (arr[i] < arr[a - 1]) {
            printf("%d ", arr[i]);
            k++;
        }
    }

    if (k == 0) {
        printf("0");
    }

    return 0;
}
