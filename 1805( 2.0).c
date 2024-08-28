
#include <stdio.h>

int main() {
    long long int A, B;

    scanf("%lld %lld", &A, &B);

    long long int sumA = (A - 1) * A / 2;

    long long int sumB = B * (B + 1) / 2;

    long long int result = sumB - sumA;

    printf("%lld\n", result);

    return 0;
}
