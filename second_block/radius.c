#include <stdio.h>

int main() {
  long int planet_radius;
  scanf("%d", &planet_radius);

  long int disk_radius;
  long int hours_q;
 
  disk_radius = planet_radius * 2;
  hours_q = (planet_radius * 4) / 900;
  
  printf("%ld %ld", disk_radius, hours_q);

  return 0;
}
