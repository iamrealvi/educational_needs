#include <stdio.h>

int main(void) {

  char s;
  int age, height, weight;
  double bov_m, bov_f;

  scanf("%s%d%d%d", &s, &age, &height, &weight);
  switch(s) {
    case 'm':
        bov_m = 10*weight + 6.25*height - 5*age + 5;
        printf("|  BMR  |\n");
        printf("|%4.2f|\n", bov_m);
        break;
    case 'f':
        bov_f = 10*weight + 6.25*height - 5*age - 161;
        printf("|  BMR  |\n");
        printf("|%4.2f|\n", bov_f);
        break;
    default:
      printf("ERROR!");
      break;
  }

  return 0;
}
