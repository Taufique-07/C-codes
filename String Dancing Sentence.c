#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int isUpper = 1;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            putchar(isUpper ? toupper(ch) : tolower(ch));
            isUpper = !isUpper;
        } else {
            putchar(ch);
        }
    }

    return 0;
}
