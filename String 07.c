#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];
    gets(name);

    for(int i=0 ; name[i]!='\0' ; i++)
    {
        printf("%c \n",name[i]);
    }
}
