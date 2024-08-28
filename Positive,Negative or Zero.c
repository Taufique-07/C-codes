#include<stdio.h>

int main()
{
    int num;

    printf("Enter an integer:\n");
    scanf("%d",&num);

    if (num>0)
    {
        printf("The entered integer is positive.\n");
    }
    else if (num<0)
    {
        printf("The entered integer is negative.\n");
    }
    else
    {
    printf("The entered integer is Zero.\n");
    }
    return 0;
}
