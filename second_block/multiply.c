#include <stdio.h>
#include <math.h>

int main() {
    
    int a1,a2,a3,a4,a5;
    int res;
    scanf("%d%d%d%d%d", &a1,&a2,&a3,&a4,&a5);
    res = pow(a1, 2) + pow(a2, 2) + pow(a3, 2) + pow(a4, 2) + pow(a5, 2);
    printf("%d", res);

    return 0;
}   
