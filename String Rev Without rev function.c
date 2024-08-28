#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];
    gets(name);

    int len = strlen(name);

    for (int i = len - 1; i >= 0; i--)
        {
        printf("%c  ", name[i]);
        }

    printf("\n");

    printf("%s \n",name);

}

