#include<stdio.h>

int main()

{
    int a,i,sum;

    printf("Enter a :\n");
    scanf("%d",&a);
     sum=0;
    for (i=1; a>=i; i++ )
    {
        sum=sum+1;
        printf("%d",sum);
    }
    return 0;
}
