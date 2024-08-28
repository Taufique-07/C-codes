#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    gets(s);

    int digit[10] = {0};

    for (int i = 0; s[i] != ' '; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digit[s[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", digit[i]);
    }
    return 0;
}
