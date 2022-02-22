#include <stdio.h>

int main() {
  int cups;
  double mol_mass = 3e-23;
  double one_drop_mass = 0.05;
  double cup_mass = 249.5;
  double in_cup_drops = 0;
  double in_cup_mol = 0;

  scanf("%d", &cups);

  in_cup_drops = cups * (cup_mass / one_drop_mass);
  in_cup_mol = cups * (cup_mass / mol_mass);

  printf("%.0lf %.3e", in_cup_drops, in_cup_mol);

  return 0;
}
