#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num[n];
    for(int i= 0 ; i<n ; i++)
    {
        scanf("%d",&num[i]);
    }

    int sum=0;


    for (int i=0 ; i<n ; i++)
    {
        sum=sum+num[i];
    }
     float avg=sum/n;

    printf("Sum : %d \n",sum);
    printf("Avg : %.2f \n",avg);
}
