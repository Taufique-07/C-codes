#include <stdio.h>

int main()
 {
    char c, prevChar = '\0';

    while ((c = getchar()) != EOF)
    {
        if (!(prevChar == ' ' && c == ','))
            {
            putchar(c);
        }

        prevChar = c;
    }

    return 0;
}
