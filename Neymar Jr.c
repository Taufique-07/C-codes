#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < k; i++)
        {
        if (n % 10 == 0)
         {
            n /= 10;
        }
        else
         {
            n -= 1;
        }
    }

    printf("%d\n", n);

    return 0;
}

