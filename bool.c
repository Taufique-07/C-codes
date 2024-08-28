#include<stdio.h>
#include<stdbool.h>

bool isright(int n)
{
    if(n>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int rslt=isright(n);
    printf("%d",rslt);
}
