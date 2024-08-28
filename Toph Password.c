
#include <stdio.h>

int main()
{
    char ch[16];
    scanf("%s", input);

    if (ch[0] >= 'a' && ch[0] <= 'z')
        {
        ch[0] -= 'a' - 'A';
        }
    for (int i = 0; ch[i] != '\0'; ++i)
    {
        if (ch[i] == 's')
         {
            ch[i] = '$';
         }
         else if (ch[i] == 'i')
         {
            ch[i] = '!';
         }
         else if (ch[i] == 'o')
        {
            ch[i] = '(';
            ch[++i] = ')';
        }
    }

    int len = 0;
    while (ch[len] != '\0')
        {
        ++len;
        }
    ch[len] = '.';
    ch[len + 1] = '\0';

    printf("%s\n", ch);
    return 0;
}
