#include <stdio.h>

int main()
{
    char text[501];

    fgets(text, sizeof(text), stdin);


    if (strlen(text) <= 80) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

