#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int result = 1;

    for (int i = 0; i < n; i++)
        {
        printf("%s%d", (i == 0) ? "" : " + ", result);
        result *= n;
    }

    printf("\n");

    return 0;
}
