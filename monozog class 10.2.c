#include <stdio.h>

int main()
{
    char name[20];

    printf("Enter a string: ");
    scanf("%s", name);

    for (int i = 0; name[i]!=' '; i++)
        {
        printf("%c", name[i]);
        }

    return 0;
}

