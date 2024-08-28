#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];
    gets(name);

    strrev(name);

    printf("%s \n",name);

}
