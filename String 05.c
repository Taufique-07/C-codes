#include<stdio.h>
#include<string.h>

int main()

{
    char a[2000];
    gets(a);

    char b[2000];
    gets(b);

    strcat(a,b);

    printf("%s \n",a);

    return 0;
}
