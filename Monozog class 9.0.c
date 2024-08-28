#include <stdio.h>

int main()
{
    int num[3];


    for (int i = 0; i < 3; i++) {

        scanf("%d", &num[i]);
    }


    for (int j = 0; j < 3; j++) {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num[j], i, num[j] * i);
        }
        printf("\n");
    }

    return 0;
}

