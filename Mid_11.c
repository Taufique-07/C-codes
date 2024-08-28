#include<stdio.h>

int main()
{
    int N,M,O;
    scanf("%d %d %d",&N,&M,&O);

    int mark=0;

    if(N>M && N>O)
    {
        mark=N;
    }
    else if (M>N && M>O)
    {
        mark=M;
    }
    else
    {
        mark=O;
    }
    printf("%d\n",mark);

    if(mark>40)
    {
        printf("Pass!\n");
    }
    else
    {
        printf("Fail!");
    }
    return 0;
}
