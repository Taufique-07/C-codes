#include<stdio.h>

int main()
{
    int stu;
    scanf("%d",&stu);

    for(int i=1; i<=stu; i++)
    {
        int n;
        scanf("%d",&n);

        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&arr[i]);
        }

         int max = arr[0];

    for(int i=1; i<n ; i++)
     {
        if (max <  arr[i])
          {
              max = arr[i];
          }
     }
      printf("Student %d's highest score is: %d\n", i, max);
    }
    return 0;
}
