#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    int res = 0;
    int k = 0;

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = a - 1; i >= 0; i--) {
        res++;
        //printf("%d ", arr[res - 1]);
        //printf("%d ", arr[i]);
        if (arr[i] == arr[res - 1]) {
            //printf("+ ");
            k++;
        }
        //printf("%d", k);
        //printf("\n");
    }

    if (k == a) {
        printf("YES");
    } else {
        printf("NO");
    }


    return 0;
}
