#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int mark;
    scanf("%d",&mark);
    int f[n-1];
    for(int i=0 ; i<n-1 ; i++)
    {
        scanf("%d",&f[i]);
    }

    int more=0,less=0;

    for(int i=0 ; i<n-1 ; i++)
     {
         if(mark>f[i])
           {
           less++;
           }

        else
          {
         more++;
          }
    }
    printf("%d \n",less);
    printf("%d \n",more);

    return 0;
}

