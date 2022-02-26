#include <stdio.h>

int main() {
    int a,b;
    int result;
    scanf("%d%d", &a, &b);

    switch(a) {
    case 1:
        result = 0 + b;
        printf("%d", result);
        break;
    case 2:
        result = 31 + b;
        printf("%d", result);
        break;
    case 3:
        result = 59 + b;
        printf("%d", result);
        break;
    case 4:
        result = 90 + b;
        printf("%d", result);
        break;
    case 5:
        result = 120 + b;
        printf("%d", result);
        break;
    case 6:
        result = 151 + b;
        printf("%d", result);
        break;
    case 7:
        result = 181 + b;
        printf("%d", result);
        break;
    case 8:
        result = 212 + b;
        printf("%d", result);
        break;
    case 9:
        result = 243 + b;
        printf("%d", result);
        break;
    case 10:
        result = 273 + b;
        printf("%d", result);
        break;
    case 11:
        result = 304 + b;
        printf("%d", result);
        break;
    case 12:
        result = 334 + b;
        printf("%d", result);
        break;
    default: 
        printf("ERROR!");
        break;
    }

    return 0;
}
