#include<stdio.h>
#include<string.h>

int vowel(const char *a)
{
    int count =0;

    for(int i = 0; a[i]!='\0'; i++ )
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
            count++;
            }
    }
    return count;
}

int main()
{
    while(1){
    char str[1000];
    gets(str);

    int v = vowel(str);
    printf("There are %d number of vowels.\n",v);
    }
    return 0;

}

