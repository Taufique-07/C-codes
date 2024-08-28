#include<stdio.h>

int rec(int num)
{
    int sum=0;
    if(num > 0)
    {
        sum+=(num%10);
        sum+=rec(num/10);
    }
    else
    {
        return sum;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Result : %d\n",rec(n));
    return 0;
}
