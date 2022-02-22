#include <stdio.h>

int main() {
  int time;
  int hours;
  int minutes;

  scanf("%d", &time);

  hours = time / 3600;
  minutes = (time / 60) - (hours * 60);

  printf("%d %d", hours, minutes);
  return 0;
}
