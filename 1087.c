#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2;

    while (1) {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            break;
        }

        int moves;

        if (x1 == x2 && y1 == y2) {
            moves = 0;
        } else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
            moves = 1;
        } else {
            moves = 2;
        }

        printf("%d\n", moves);
    }

    return 0;
}

