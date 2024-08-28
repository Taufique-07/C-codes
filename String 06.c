#include<stdio.h>
#include<string.h>

int main()
{
    while(1)
        {
    char a[1000];
    gets(a);

    char b[1000];
    gets(b);

    int r ;
    r=strcmp(a,b);

    printf("%d \n",r);
        }

    return 0;
}
