#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num[2000];
    int counts[2000] = {0};

    for (int i = 0; i < n; i++)
        {
        scanf("%d", &num[i]);
        counts[i] = 1;

        for (int j = 0; j < i; j++)
            {
            if (num[j] == num[i])
             {
                counts[j]++;
                counts[i] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        {
        if (counts[i] > 0)
            {
            int count = counts[i];
            printf("%d aparece %d vez(es)\n", num[i], count);
            }
        }

    return 0;
}

