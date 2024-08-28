#include <stdio.h>

int main() {
    int num;


    scanf("%d", &num);

    for (int row = 1; row <= num; row++) {
        for (int col = 1; col <= num - row; col++) {
            printf(" ");
        }
        for (int col = 1; col <= row; col++) {
            printf("%d ",col);
        }
        for(int col=row-1 ;col>=1 ;col--)
        {
             printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}

