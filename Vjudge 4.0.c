#include <stdio.h>
#include <string.h>

int main() {
    char S[200005];
    char T[200005];

    scanf("%s %s", S, T);

    int len = strlen(S);
    int operations = 0;

    for (int i = 0; i < len; i++) {
        if (S[i] != T[i]) {
            operations++;
        }
    }

    printf("%d\n", operations);

    return 0;
}

