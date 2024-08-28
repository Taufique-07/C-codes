#include<stdio.h>
#include<string.h>

char string(char x[]);
char string(char x[])
{
     char s[1000];

    printf("Enter a sentence: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i] == '\n')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
        printf("\n");
        return s;
}
int main()
{
    char s;
    string(s);

    return 0;
}








