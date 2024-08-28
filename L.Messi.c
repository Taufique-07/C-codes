#include <stdio.h>

int main()
 {
    int n, product, quantity;
    double total = 0.0;

    scanf("%d", &n);

    for (int i =0 ; i < n; i++) {
        scanf("%d %d", &product, &quantity);

        switch (product) {
            case 1001:
                total += 1.50 * quantity;
                break;
            case 1002:
                total += 2.50 * quantity;
                break;
            case 1003:
                total += 3.50 * quantity;
                break;
            case 1004:
                total += 4.50 * quantity;
                break;
            case 1005:
                total += 5.50 * quantity;
                break;
            default:
                printf("Invalid Input!");
        }
    }

    printf("%.2lf\n", total);

    return 0;
}
