#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int *ptr=&a;

    printf("%d",*ptr);

    return 0;
}
