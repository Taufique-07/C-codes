#include <stdio.h>

int main() {
    int num = 100;
    while ((num %= 3) > 0) {
        for (int j = 1; j < num; j++) {
            printf("num=%d    j=%d\n", num /= 10, j);
        }
    }

    return 0;
}

