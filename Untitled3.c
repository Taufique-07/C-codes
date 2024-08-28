
#include<stdio.h>
int main()
{
    int n,col,row;
    scanf("%d", &n);

    for(row=n; row>1; row--)
        {
        for(col=1; col<=row-2; col++)
            {
            printf("#");
        }
        for(col=1; col<=n-row+1; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row-2; col++)
        {
            printf("#");
        }
        printf("\n");}
    for(row=3;row<=n;row++){
        for(col=1;col<=row-2;col++){
            printf("#");
        }
        for(col=1;col<=n-row+1;col++){
            printf("  ");
        }
        for(col=1;col<=row-2;col++)
        {
        printf("#");}
        printf("\n");
    }}

