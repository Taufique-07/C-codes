#include <stdio.h>

int main() {
    int N, K;
    char S[101];

    scanf("%d %d %s", &N, &K, S);

    for (int i = 0; i < N; i++) {
        if (K > 0 && S[i] == 'o') {
            printf("o");
            K--;
        } else {
            printf("x");
        }
    }

    printf("\n");

    return 0;
}
