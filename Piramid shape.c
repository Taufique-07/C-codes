#include<stdio.h>

int main()
{
    int n;

    printf("Enter a value :\n");
    scanf("%d",&n);

    for (int i=1 ; i<=n-1 ; i++)
    {
        for (int j=n-1; j>=i ; j--)
          {
              printf(" ");
          }
          for(int k=1 ; k<=i ; k++)
          {
              printf("* ");
          }
      printf("\n");

    }

    for (int i=n; i>=1; i--)//for line
    {
        for(int j=i; j<n ; j++)//fpr space
            {
                printf(" ");
            }
            for (int k=i; k>=1 ; k--)//to print *
            {
                printf("* ");
            }
        printf("\n");
    }


    return 0;
}
