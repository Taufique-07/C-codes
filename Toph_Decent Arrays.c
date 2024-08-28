#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int numbers[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int ascending = 1;

    for (int i = 1; i < N; i++) {
        if (numbers[i] < numbers[i - 1]) {
            ascending = 0;
            break;
        }
    }

    if (ascending) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
