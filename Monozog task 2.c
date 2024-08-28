#include<stdio.h>

int rec(int n)
{
    if(n==1)
    {
          return 1;
    }
    else
        {
            return n+rec(n-1);
        }
}

int main()
{
    int num;
    scanf("%d",&num);
    int result=rec(num);
    printf("%d\n",result);

    return 0;
}
