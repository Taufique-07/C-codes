#include<stdio.h>

int main()
{
    int start,end,num,oddsum=0,evensum=0;

    printf("Enter starting number :\n");
    scanf("%d",&start);
    printf("Enter ending number :\n");
    scanf("%d",&end);

    for (num=start ;num<=end ;num++)
    {
        if (num%2==0)
        {
            evensum+=num;
        }
        else
        {
            oddsum+=num;
        }
    }

    printf("Sum of odd nunmers :%d\n",oddsum);
    printf("Sum of even nunmers :%d\n",evensum);
     return 0;
}

