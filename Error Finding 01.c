#include <stdio.h>

int main(void) {
    int a[5] = {97, 98, 99, 100, 101};
    int x = 0;

    while (1) {
        printf("\"%d\" = \'%c\' \n", a[x], a[x]);
        printf("\"%d\" = \'%c\' \n", a[x] + 1, a[x] + 1);
        if (a[x] >= 101) {
            break;
        }
        x++;
    }

    return 0;
}

