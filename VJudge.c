#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    for (int i = 0; i <
    N; i++) {
        scanf("%d", &A[i]);
    }

    int B[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    int totalScore = 0;
    for (int i = 0; i < M; i++) {
        totalScore += A[B[i] - 1];
    }

    printf("%d\n", totalScore);

    return 0;
}

