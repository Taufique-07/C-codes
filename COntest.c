#include <stdio.h>
#include <string.h>

#define MAX_B 100005

void ab(int n, char b[MAX_B][2], int m, char bb[MAX_B]) {
    int i = n - 1;

    for (int j = 0; j < m; j++) {
        while (i >= 0 && strcmp(bb[j], b[i]) != 0) {
            i--;
        }

        printf("%s ", bb[j]);
        for (int k = i + 1; k < n; k++) {
            printf("%s ", b[k]);
        }
        printf("\n");

        i--;
    }

    for (int k = i + 1; k < n; k++) {
        printf("%s ", b[k]);
    }
    printf("\n");
}

int main() {
    int n, m;
    char b[MAX_B][2], bb[MAX_B];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", b[i]);
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%s", bb[i]);
    }

    ab(n, b, m, bb);

    return 0;
}
