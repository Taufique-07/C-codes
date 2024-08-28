#include <stdio.h>

int main()
{
    int A,B;
    char str[20];
    scanf("%d %d",&A,&B);

    printf("%s \n",(B%A==0)? "Sao Multiplos":"Nao sao Multiplos");

    return 0;
}
