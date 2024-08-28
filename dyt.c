#include<stdio.h>

int main()
{
    int n,col,row;
    scanf("%d", &n);
    n = n-1;

    //upper loop

    for(row=n; row>=1; row--)
        {
        for(col=1; col<=row; col++) //for print #
            {
            printf("#");
        }
        for(col=1; col<=n-row; col++) // for space
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)//print 2nd #
        {
            printf(" #");
        }
        printf("\n");  // to create new line
    }}
