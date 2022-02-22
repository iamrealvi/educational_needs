#include <stdio.h>
#include <math.h>

int main() {
    int k;
    long long int res;
    long long int another_res;
    long long int final_res;
    scanf("%d", &k);

    res = pow(2, 30);
    another_res = pow(10, 9);
    final_res = k * (res - another_res);
    
    printf("%lld", final_res);

    return 0;
}
