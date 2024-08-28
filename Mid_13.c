#include <stdio.h>

int main() {
    int w[4];
    const char* foods[] = {"Pizza", "Pasta", "Noodles", "Soup"};

    for (int i = 0; i < 4; i++) {
        scanf("%d", &w[i]);
    }

    int max = 0;
    for (int i = 1; i < 4; i++) {
        if (w[i] > w[max]) {
            max = i;
        }
    }

    for (int i = 0; i < 4; i++) {
        int food = (i + 3 - max) % 4;
        if (i == max) {
            printf("Oldest will get %s\n", foods[food]);
        } else if (i == (max + 1) % 4) {
            printf("Second oldest will get %s\n", foods[food]);
        } else if (i == (max + 2) % 4) {
            printf("Third oldest will get %s\n", foods[food]);
        } else {
            printf("Youngest will get %s\n", foods[food]);
        }
    }

    return 0;
}

