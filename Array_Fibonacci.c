#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];

    num[0]=0;
    num[1]=1;


    for(int i=2; i<n ; i++)
     {
        num[i]=num[i-1]+num[i-2];
     }


      for(int i=0 ; i<n ; i++)
      {
          printf("%d  ",num[i]);
      }

    return 0;
}
