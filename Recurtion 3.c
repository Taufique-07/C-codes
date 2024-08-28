#include <stdio.h>

int series(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1 || n == 2) {
        return 2;
    } else {
        return series(n - 1)* series(n-2);
    }
}

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ",series(i));
    }

    return 0;
}
