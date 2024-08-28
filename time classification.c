#include<stdio.h>

int main()
{
    int time;

    printf("Enter the hour (in 24 hr formate):\n");
    scanf("%d",&time);

    if (time>=0 && time <= 11)
    {
        printf("Morning.\n");
    }
    else if (time >=12 && time<= 17)
    {
        printf("Afternoon.\n");
    }
    else if (time>=18 && time <= 23)
    {
        printf("Evening.\n");
    }
    else
    {
        printf("Input Invalid.\n");
    }
    return 0;
}
