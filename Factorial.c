#include<stdio.h>

int main()
{
    int n,i;
    unsigned long long int factorial=1;

    printf("Enter a positive integer number :\n");
    scanf("%d",&n);

    if (n<0)
    {
        printf("Please enter a valid number!\n");
    }
    else
    {
        for (i=1; i<=n; i++)
        {
            factorial*=i;
        }
        printf("The Factorial of the number is : %d \n",factorial);
    }
    return 0;
}
