#include <stdio.h>
#include <math.h>

int main() {
    int k;
    long int res;
    long int another_res;
    long int final_res;
    scanf("%d", &k);

    res = pow(2, 30);
    another_res = pow(10, 9);
    final_res = k * (res - another_res);
    
    printf("%ld", final_res);

    return 0;
}
