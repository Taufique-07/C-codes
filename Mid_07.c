#include<stdio.h>

int main()
{

    int N,X,M,max=0,nation=0;
    scanf("%d",&N);
    for(int i =1 ; i<=N ; i++)
    {
        scanf("%d",&M);
        for(int k=1 ; k<=M ; k++)
        {
            scanf("%d",&X);
            if(X>max)
            {
                max=X;
                nation=i;
            }
        }
    }
    printf("Nation %d Will be Victorious. \n",nation);
    printf("%d",max);

    return 0;
}
