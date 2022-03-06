#include <stdio.h>

int main() {
    int a;
    int i = 1;
    scanf("%d", &a);
    int arr[a];

    while (i != 0) {
        for(i = 1; i <= a; i++) {
            scanf("%d", &arr[i]);
        }

        for(i = a; i > 0; i--) {
            printf("%d ", arr[i]);
        }
    }
   

    return 0;
}