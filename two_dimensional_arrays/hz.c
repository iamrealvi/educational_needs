#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        int k = 1;
        int tmp = n;
        
        if (i % 2 != 0) {
            for (int j = n; j > 0; j--) {
                    arr[i][j] = tmp;
                    tmp--;
                    printf("%d ", arr[i][j]);
            }
        } else {
            for (int j = 0; j < n; j++) {
                arr[i][j] = k;
                k++;
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
