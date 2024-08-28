#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        }

        int peaks = 0;
        int prev, current, next;
        scanf("%d %d", &prev, &current);

        for (int i = 2; i < N; i++) {
            scanf("%d", &next);

            if ((current > prev && current > next) || (current < prev && current < next)) {
                peaks++;
            }

            prev = current;
            current = next;
        }

        printf("%d\n", peaks);
    }

    return 0;
}

