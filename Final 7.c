#include<stdio.h>

int arraySum(int arr[],int n)
{
    int sum=0;

    for(int i=0 ; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int arrayAvg(int arr[],int n)
{
    int sum= arraySum(arr,n);
    double avg = sum/n;

    return avg;
}

int main()
{
    int n;
    scanf("%d",&n);

    int num[n];

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&num[i]);
    }

    int rslt1=arraySum(num,n);
    printf("%d\n",rslt1);

    double rslt2=arrayAvg(num,n);
    printf("%lf\n",rslt2);

    return 0;
}
