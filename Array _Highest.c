#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int num[n];

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

    return 0;
}
