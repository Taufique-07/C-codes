#include <stdio.h>

int main() {
    float A, B;

    scanf("%f %f", &A, &B);

    double average = (A * 3.5 + B * 7.5) / (3.5 + 7.5);

    printf("MEDIA = %.5lf\n", average);

    return 0;
}
