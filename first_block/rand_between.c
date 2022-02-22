#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  int a,b;
  scanf("%d%d", &a, &b);
  int result = a + rand() % (b - a + 1);
  printf("%d", result);
  return 0;
}
