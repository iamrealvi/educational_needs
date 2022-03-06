#include <stdio.h>

int main()
{
    char c;
    int a, b;
    double result;
    if (scanf("%c%d%d", &c, &a, &b) && b != 0)
    {
        switch (c)
        {
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
            result = a / b;
            printf("%.2lf", result);
            break;
        default:
            printf("ERROR!");
            break;
        }
    }
    else
    {
        printf("ERROR!");
    }

    return 0;
}
