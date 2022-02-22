#include <stdio.h>

int main() {
    int month_start;
    int month_end;
    double plan;
    double result;

    scanf("%d%d%lf", &month_start, &month_end, &plan);

    result = (month_end - month_start) * plan;

    printf("%.2lf", result);

    return 0;
}