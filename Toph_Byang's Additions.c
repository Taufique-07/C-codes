#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int carry = 0;
    int confused = 0;

    while (A > 0 || B > 0) {
        int sum = A % 10 + B % 10 + carry;
        carry = sum / 10;

        if (carry > 0) {
            confused = 1;
            break;
        }

        A /= 10;
        B /= 10;
    }

    if (confused) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
