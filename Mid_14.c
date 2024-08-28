#include<stdio.h>

int main()
{
    int m,x,max=0,nation=0,n;
    scanf("%d",&n);
    for(int i=1 ;i<=n ; i++)
    {
        scanf("%d",&m);
        for(int k =1 ; k<=m ; k++)
        {
            scanf("%d",&x);
              if(x>max)
             {
            max=x;
            nation=i;
            }
        }
    }

    printf("Nation %d Will be victorious \n",nation);
    printf("%d \n",max);
    return 0;
}

