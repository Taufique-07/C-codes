#include<stdio.h>
#include<string.h>


int pln(const char *str) {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char a[1000];
    gets(a);
    char b[1000];
    gets(b);


    if(pln(a)&&pln(b))
    {
        printf("%s and %s are Palindrome.\n",a,b);
    }
    else
    {
         printf("%s and %s are not Palindrome.\n",a,b);
    }
    return 0;
}
