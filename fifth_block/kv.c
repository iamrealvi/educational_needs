#include <stdio.h>
#include <math.h>

int main() {
  int a;
  scanf("%d", &a);

    if (log2(a) - (int)log2(a) == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

  return 0;
}
