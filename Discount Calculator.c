#include<stdio.h>

int main()
{
    float cost,discount,price;

    printf("Enter the cost of the items :\n");
    scanf("%f",&cost);

    if (cost>=100)
    {
        discount=0.20;
    }
    else if (cost>=50)
    {
        discount=0.10;
    }
    else
    {
        discount=0;
    }

    price=cost-(cost*discount);

        printf("Final pricee after discount :$ %.3f\n",price);
        return 0;
}
