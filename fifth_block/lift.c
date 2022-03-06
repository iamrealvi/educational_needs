#include <stdio.h>

int main() {
    int a,b,c;
    int r1,r2,r3;
    
    scanf("%d%d%d", &a, &b, &c);

    if (a > 1 || a < 41 && (a == b || a == c || c == b)) {
        if (a > b && a > c) {
            r3 = a;
            if (b < c) {
                r1 = b;
                r2 = c;
            } else {
                r2 = c;
                r1 = b;
            }
        }
        if (b > a && b > c) {
            r3 = b;
            if (a < c) {
                r1 = a;
                r2 = c;
            } else {
                r2 = c;
                r1 = a;
            }
        }
        if (c > a && c > b) {
            r3 = c;
            if (a < b) {
                r1 = a;
                r2 = b;
            } else {
                r2 = b;
                r1 = a;
            }
        }
        printf("%d %d %d", r1,r2,r3);
    }
    
    return 0;
}
