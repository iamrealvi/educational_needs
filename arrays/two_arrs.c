#include <stdio.h>

int main() {

    int a;
    int k = 0;
    int res = 0;
    double sr_arf;
    scanf("%d", &a);
    int arr[a];

    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
        res += arr[i];
        k++;
    }

    sr_arf = (double)res / (double)k;

    for (int i = 0; i < a; i++) {
        if (arr[i] > sr_arf) {
            printf("%d ", arr[i]);
        }
    }

    for (int i = 0; i < a; i++) {
        if (arr[i] <= sr_arf) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}