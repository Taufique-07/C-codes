#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter 4 integer number.\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d){
        printf("%d is the biggest.\n",a);
    }
    else if ( b>c && b>d){
        printf("%d is the biggest.\n",b);
    }
    else if(c>d)
        {
        printf("%d is the biggest.\n",c);
    }
    else
    {
        printf("%d is the biggest.\n",d);
    }

    return 0;
}
