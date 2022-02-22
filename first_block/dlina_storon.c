#include <stdio.h>

//  Сумма цифр в трехзначном числе

int main() {
    int sum = 0;
    int f_res = 0;
    int s_res = 0;
    int t_res = 0;
    int input = 0;

    scanf("%d", &input);

    f_res = input / 100; //  первое число
    printf("%d\n", f_res);
    s_res = input / 10 % 10; //  второе число
    printf("%d\n", s_res);
    t_res = input % 10; //  третье число
    printf("%d\n", t_res);
    sum = f_res + s_res + t_res;

    printf("%d", sum);

  return 0;
}