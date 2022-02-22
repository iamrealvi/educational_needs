#include <stdio.h>

int main() {
    double radius, height;
    double cylinder_vol;
    double cone_vol;
    double one_divide_by_three = (double)1 / (double)3;
    double pi = 3.14159265358979323846;
    scanf("%lf%lf", &radius, &height);

    cylinder_vol = height * pi * (radius * radius);
    cone_vol = (one_divide_by_three * height * pi) * (radius * radius);

    printf("%.2lf %.2lf", cylinder_vol, cone_vol);
    return 0;
}
