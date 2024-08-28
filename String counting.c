#include <stdio.h>
#include <string.h>


int main() {
    char word[1000];
    char max[1000] = "";

    while (scanf("%s", word) && strcmp(word, "0") != 0)
        {
        int length = strlen(word);
        printf("%d", length);

        while (scanf("%s", word) && strcmp(word, "0") != 0)
            {
            length = strlen(word);
            printf("-%d", length);

            if (strlen(word) >= strlen(max))
                {
                strcpy(max, word);
            }
        }

        printf("\n");
    }

    printf("The biggest word: %s\n", max);

    return 0;
}

