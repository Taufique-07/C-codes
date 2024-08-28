#include<stdio.h>
#include<String.h>

int main()

{
    while (1)
    {
        char a[1000];
        gets(a);

        char b[1000];

        strcpy(b,a);

        printf("%s\n",b);
    }
    return 0;
}
