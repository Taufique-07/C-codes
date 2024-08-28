#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter the x co-ordinate:\n");
    scanf("%d",&x);
     printf("Enter the y co-ordinate:\n");
    scanf("%d",&y);

    if (x>0 && y>0)
    {
        printf("The point lies in Quadrant I.\n");
    }
    else if (x<0 && y>0)
    {
         printf("The point lies in Quadrant II.\n");
    }
    else if (x<0 && y<0)
    {
        printf("The point lies in Quadrant III.\n");
    }
    else if (x>0 && y<0)
    {
        printf("The point lies in Quadrant IV.\n");
    }
    else
    {
        printf("This point is origin.\n");
    }
    return 0;
}
