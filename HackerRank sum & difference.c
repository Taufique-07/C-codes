#include <stdio.h>

int main() {
    int a, b;
    float x, y;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);


    int sum_int = a + b;
    int diff_int = a - b;
    float sum_float = x + y;
    float diff_float = x - y;


    printf("%d %d\n", sum_int, diff_int);
    printf("%.1f %.1f\n", sum_float, diff_float);

    return 0;
}

