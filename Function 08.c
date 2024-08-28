#include<stdio.h>

int display(int x[]);

int display(int x[])
{
     int n;
     printf("Enter The Size of Array :\n");
     scanf("%d",&n);
     int num[n];
     printf("Enter elements of array :\n");

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&num[i]);
    }

    int max = num[0];

    for(int i=1; i<n ; i++)
     {
        if (max <  num [i])
          {
              max = num[i];
          }
     }
        printf("Max number is %d \n",max);

        return max;

}
int main()
{
    int a;
    display(a);

    return 0;
}
