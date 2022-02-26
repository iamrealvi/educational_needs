#include <stdio.h>

int main(void) {
    double a, b;
    char fuck;
    double result;
    scanf("%lf%lf%s", &a, &b, &fuck);
    printf("%lf %lf %c\n", a, b, fuck);

    switch(fuck) {
    case '+':
        result = a + b;
        printf("%.2lf", result);
        break;
    case '-':
        result = a - b;
        printf("%.2lf", result);
        break;
    case '*':
        result = a * b;
        printf("%.2lf", result);
        break;
    case '/':
        if (b == 0) {
            printf("ERROR!");
            break;
        } else {
            result = a / b;
            printf("%.2lf", result);
            break;
        }
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}
