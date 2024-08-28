#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double num[n];
    int pos=0;
    int avg;
    double sum =0;

    for(int i=0 ; i<n ; i++)
    {
        scanf("%lf",&num[i]);
    }

    for(int i = 0 ; i<n; i++)
    {
        if(num[i]>0)
        {
            sum+=num[i];
            pos++;
        }
    }

    if(pos<2)
    {
      printf("too few numbers.\n");
    }
    else
    {
        avg=sum/pos;
        printf("%ld\n",avg);
    }
}
