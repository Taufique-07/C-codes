#include<stdio.h>

int main()
{
    while(1){
    int num[10];

    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&num[i]);
    }

    for(int i=0 ; i<9 ; i+=2)
    {
        int temp = num[i];
        num[i]=num[i+1];
        num[i+1]=temp;
    }

    for (int i=0 ; i<10 ; i++)
    {
        printf("%d ",num[i]);
    }
    }
    return 0;


}

