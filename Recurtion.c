#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    for (int i = N - 1; i >= 1; i--) {
        printf("%d%s", i, (i > 1) ? " " : "\n");
    }

    return 0;
}
