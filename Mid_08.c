#include<stdio.h>

int main()
{
    int f1,f2,f3,f4;
    scanf("%d %d %d %d",&f1,&f2,&f3,&f4);

    if(f1>f2 && f1>f3 && f1>f4)
    {
        printf("1st Friend will pay. \n");
    }
    else if(f2>f1 && f2>f3 && f2>f4)
    {
        printf("2nd Friend will pay. \n");
    }
    else if(f3>f1 && f3>f2 && f3>f4)
    {
        printf("3rd Friend will pay. \n");
    }
    else
    {
        printf("4th Friend will pay. \n");
    }
}
