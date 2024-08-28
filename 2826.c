#include <stdio.h>
#include <string.h>

int main() {
    char word1[21], word2[21];

    scanf("%s %s", word1, word2);

    int cmp = strcmp(word1, word2);

    if (cmp > 0) {
        char temp[21];
        strcpy(temp, word1);
        strcpy(word1, word2);
        strcpy(word2, temp);
    }

    printf("%s\n%s\n", word1, word2);

    return 0;
}

