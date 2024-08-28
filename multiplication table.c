#include<stdio.h>

int main()
{
   int num,i;
   printf("Enter value which numbers table you want:\n");
   scanf("%d",&num);
    while (i<=10)
    {
        printf("%d x %d =%d\n",num,i,num*i);
        i++;
    }
   return 0;
}

