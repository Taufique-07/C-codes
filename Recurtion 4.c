#include <stdio.h>

int series(int n)
{
    if (n == 0)
        {
        return 1;
    }
    else if (n == 1 || n == 2)
     {
        return 2;
    }
    else {
        return series(n - 1)* series(n-2);
    }
}

int main()
 {
    int n;

    scanf("%d", &n);

    printf(" %d\n",series(n - 1));

    return 0;
}
