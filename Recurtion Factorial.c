#include<stdio.h>

 long long int fact(long long int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1)%10000);
    }
}

int main()
{
    long long int n;
    scanf("%lld",&n);
  long long int rslt=fact(n);
     printf("%lld",rslt);
	return 0;
}
