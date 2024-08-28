#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    gets(str);

    strupr(str);
    strlwr(str);

    printf("%s\n",str);
    printf("%s\n",str);

    return 0;
}
