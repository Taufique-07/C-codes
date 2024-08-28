#include<stdio.h>

int main()
{
    int tk;
    scanf("%d",&tk);
    int n;
    scanf("%d",&n);
    int arr[n];
    int total=0;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
       total+= arr[i]%100;
    }
    if (tk >= total)
        {
        printf("Yes!! Yes!! Here we go.\n");
    }
    else
    {
        printf("Oh!, no.\n");
    }

    return 0;

}
