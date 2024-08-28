#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter a integer value :\n");
    scanf("%d",&n);

    if (n<0)
    {
     printf("Enter a positive Integer.\n");
    }
    else
    {
        printf("Numbers from 1 to %d \n",n);

        for(i=1; i<=n; i++)
        {
            printf("%d \n",i);
        }
    }


    return 0;
}
