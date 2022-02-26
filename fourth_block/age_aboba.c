#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Rus");
  int age;
  int switch_age;
  scanf("%d", &age);

  switch_age = age % 10;

  switch(switch_age) {
      case 1:
      if (age > 9 && age < 20) {
        printf("Мне %d лет", age);
      } else {
        printf("Мне %d год", age);
      }
      break;
      case 2: 
      case 3:
      case 4:
      if (age < 20 && age > 10) {
         printf("Мне %d лет", age);
      } else {
        printf("Мне %d года", age);
      }
      break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0:
      printf("Мне %d лет", age);
      break;

      default:
      printf("ERROR!");
      break;
  }

  return 0;
}
