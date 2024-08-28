#include<stdio.h>
#include<string.h>

int main()
{
    char str1[1000];
    gets(str1);
    char str2[1000];
    gets(str2);
    char temp[1000];

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("%s\n",str1);
    printf("%s\n",str2);


    getch();

    return 0;
}
