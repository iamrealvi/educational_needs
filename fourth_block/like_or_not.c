#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    a = a % 2;
    
    switch(a) {
        case 1:
            printf("Любит");
            break;
        case 0:
            printf("Не любит");
            break;
        default: break;      
    }
                   
    return 0;
}