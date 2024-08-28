#include<stdio.h>
#include<string.h>

int main()

{
    char ch[30];
    gets(ch);

    for(int i=0 ; ch[i]!=' '; i++)
    {
          printf("%c",ch[i]);
    }

    return 0;
}
