#include<stdio.h>

int main ()
{
    int a,b,c,d;
    int highest,second_highest;

    printf("Enter 1st number :\n");
    scanf("%d",&a);

    printf("Enter 2nd number :\n");
    scanf("%d",&b);

    printf("Enter 3rd number :\n");
    scanf("%d",&c);

    printf("Enter 4th number :\n");
    scanf("%d",&d);

    if (a>=b && a>=c && a>=d)
    {
        highest=a;
        if (b>=c && b>=d)
        {
            second_highest=b;
        }
        else if (c>=b && c>=d)
        {
            second_highest=c;
        }
        else
        {
            second_highest=d;
        }
    }
    else if (b>=a && b>=c && b>=d)
    {
        highest=b;
        if (a>=c && a>=d)
        {
            second_highest=a;
        }
        else if (c>=a && c>=d)
        {
            second_highest=c;
        }
        else
        {
            second_highest=d;
        }
    }
    else if (c>=a && c>=b && c>=d)
    {
        highest=c;
        if(a>=b && a>= d)
        {
            second_highest=a;
        }
        else if (b>=a && b>=d)
        {
            second_highest=b;
        }
        else
        {
            second_highest=d;
        }
    }
    else
    {
        highest=d;
        if (a>=b && a>c)
        {
            second_highest=a;
        }
        else if (b>=a && b>c)
        {
            second_highest=b;
        }
        else
        {
            second_highest=c;
        }
    }

       printf("The Highest value is :%d\n",highest);
       printf("The Second Highest value is :%d\n",second_highest);



    return 0;
}
