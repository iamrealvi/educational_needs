#include <stdio.h>

int main()
{
    int a, b;
    int f_digit, s_digit, t_digit, fo_digit, result;
    scanf("%d%d", &a, &b);

    switch (a)
    {
    case 1:
        if (b > 9)
        {
            printf("ERROR!");
        }
        else
        {
            printf("%d", b);
        }
        break;

    case 2:
        if (b > 99)
        {
            printf("ERROR!");
        }
        else
        {
            f_digit = b / 10;
            s_digit = b % 10;
            result = f_digit * s_digit;
            printf("%d", result);
        }
        break;
    case 3:
        if (b > 999)
        {
            printf("ERROR!");
        }
        else
        {
            f_digit = (b / 100) % 10;
            s_digit = (b / 10) % 10;
            t_digit = b % 10;
            result = f_digit * s_digit * t_digit;
            printf("%d", result);
        }
        break;
    case 4:
        if (b > 9999)
        {
            printf("ERROR!");
        }
        else
        {
            fo_digit = (b % 10);
            t_digit = ((b / 10) % 10);
            s_digit = ((b / 100) % 10);
            f_digit = (b / 1000);
            result = f_digit * s_digit * t_digit * fo_digit;
            printf("%d", result);
        }
        break;
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}
