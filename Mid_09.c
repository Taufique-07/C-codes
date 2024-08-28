#include<stdio.h>

int main()
 {
    int n, p = 0, m = 0;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
        {
        scanf("%d", &num[i]);
        if (num[i] > 0)
           {
            p = p + num[i];
           }
            else
             {
            m = m + num[i];
             }
        }

    printf("\n%d\n", p+m);
    printf("%d\n", p );
    printf("%d\n", m * (-1));

    for (int i = 0; i < n; i++)
        {
        if (num[i] < 0)
           {
            printf("%d ", num[i]);
           }
        }

    return 0;
}
