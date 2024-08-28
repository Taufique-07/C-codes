#include <stdio.h>
#include <string.h>

int main() {
    char w[105];
    scanf("%s", w);

    int count[26] = {0};
    int len = strlen(w);

    for (int i = 0; i < len; i++) {
        count[w[i] - 'a']++;
    }

    int isBeautiful = 1;

    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            isBeautiful = 0;
            break;
        }
    }

    if (isBeautiful) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

