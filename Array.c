#include<stdio.h>

int main()
{
    float n;
    scanf("%f",&n);

    if(n<0 || n>100)
    {
        printf("fora de interalo =%f \n");

    }
    else
        {
        if (n>0 && n<=25)
        {
            printf("intervalo [0,25]\n");
        }
        else if(n>=25 && n<=50)
        {
           printf("intervalo [25,50]\n");
        }
        else if (n>50 && n<=75)
        {
            printf("intervalo [50,75]\n");
        }
        else if (n>75 && n<=100)
        {
           printf("intervalo [75,100]\n");
        }
    }
    return 0;

}
