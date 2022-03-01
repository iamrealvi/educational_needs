#include <stdio.h>
#include <math.h>

int main() {
    double x1,y1,x2,y2;
    double R1,R2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    
    R1 = sqrt(pow(x1,2) + pow(y1,2));
    R2 = sqrt(pow(x2,2) + pow(y2,2));
              
    if (R1 < R2)
        printf("1");
    else 
        printf("2");
              
  return 0;
}
