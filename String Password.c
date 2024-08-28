#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidPassword(char *pwd)
 {
    int len = strlen(pwd);
    if (len < 6 || len > 32) return 0;

    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    for (int i = 0; i < len; i++)
        {
        if (isupper(pwd[i])) hasUpper = 1;
        else if (islower(pwd[i])) hasLower = 1;
        else if (isdigit(pwd[i])) hasDigit = 1;
        else if (!isalnum(pwd[i])) return 0;
    }

    return (hasUpper && hasLower && hasDigit);
}

int main()
{
    char pwd[35];

    while (scanf("%s", pwd) != EOF)
        {
        if (isValidPassword(pwd)) printf("Senha valida.\n");
        else printf("Senha invalida.\n");
    }

    return 0;
}

