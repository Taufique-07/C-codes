#include<stdio.h>

int main()
{
    int n,absValue;
    printf("Enter an integer ;\n");
    scanf("%d",&n);

    if (n < 0)
    {
        absValue=-n;
    }
    else
    {
        absValue=n;
    }
    printf("Absolute value :%d\n",absValue);
    return 0;
}
