#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  if ((a > 31) || (a <= 0 || b <= 0) || (a > 29 && b == 2) || (b > 12)
   || (b==4 || b==6 || b==9 || b==11) && a > 30)
      printf("error");
  else 
      printf("correct");
      
  return 0;
}
