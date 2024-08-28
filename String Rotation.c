#include <stdio.h>
#include <string.h>

int Rotation( char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    char temp[1000];
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main() {
     char a[1000];
     gets(a);
     char b[1000];
     gets(b);

     Rotation(a,b);

     printf("%s",Rotation(a,b));

    return 0;
}

