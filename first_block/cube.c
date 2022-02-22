#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int sq_edge = input * input;
    int cube_vol = input * input * input;
    int full_cube_sq_surface = sq_edge * 6;

    printf("%d %d %d", sq_edge, full_cube_sq_surface, cube_vol);

    return 0;
}
