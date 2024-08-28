#include <stdio.h>

void buildArray(int N) {
    int arr[101][101];

    for (int i = 0; i < N; ++i)
        for (int j = i; j < N - i; ++j)
            arr[i][j] = arr[N - i - 1][j] = arr[j][i] = arr[j][N - i - 1] = i + 1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            printf("%3d%s", arr[i][j], j < N - 1 ? " " : "");
        printf("\n");
    }

    printf("\n");
}

int main() {
    int N;

    while (1) {
        scanf("%d", &N);

        if (N == 0)
            break;

        buildArray(N);
    }

    return 0;
}

