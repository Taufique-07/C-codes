#include<stdio.h>
#include<string.h>

void string(char *a, char *b)
{
      char result[200];

    strcpy(result, a);
    strcat(result, " ");
    strcat(result, b);
    printf("%s\n", result);

}

int main()
{
    char a[1000];
    gets(a);
    char b[1000];
    gets(b);
    string(a,b);

    return 0;
}
