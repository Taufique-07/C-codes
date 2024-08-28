#include<stdio.h>
#include<string.h>


int main()
{
    while(1){
    char s[100];
    gets(s);
    int a=0,e=0,i=0,o=0,u=0;

    strlwr(s);
    int len=strlen(s);

    for(int j=0 ; j<len ; j++)
    {
        char ch=(s[j]);

        switch(ch)
        {
        case 'a':
            a++;
            break ;
        case 'e':
            e++;
            break ;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break ;
        case 'u':
            u++;
            break;
        }
    }

    printf("a=%d e=%d i=%d o=%d u=%d \n",a,e,i,o,u);
    }
    return 0;
}
