#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = -n + 1; i <= n - 1; i++)
        {
        for (int j = -n + 1; j <= n - 1; j++)
         {
            if (i == 0 && j == 0)
             {
                printf("?");
             }
            else if ( i== -j || i == j)
             {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
