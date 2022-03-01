#include <stdio.h>

int main() {
  int plan = 500;
  int sum = 350;
  int result = 0;
  int a;
  scanf("%d", &a);
    
  result = sum + ((a - plan) * 2);
    
  if (a <= plan)
      printf("%d", sum);
  else 
      printf("%d", result);
    
  return 0;
}
