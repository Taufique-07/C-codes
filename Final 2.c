#include<stdio.h>

int main()
{
    char note[]="Practice makes perfect";

    char *p;
    p=note;
    p+=2;
    printf("1. %s\n",p);
    printf("2. %s\n",++p);
    printf("3. %s\n",note);
    note[8]='\0';
    printf("4. %c\n",note[9]);
    printf("5. %s\n",++p);

    return 0;
}
