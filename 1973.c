#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int sheep[N];
    int attacked = 0;
    int non_stolen_sheep = 0;

    for (int i = 0; i < N; i++)
        {
        scanf("%d", &sheep[i]);
        if (sheep[i] % 2 == 1)
         {
            attacked++;
            non_stolen_sheep++;
        }
    }

    for (int i = 0; i < N; i++) {
        if (sheep[i] % 2 == 0) {
            attacked++;
        }
        non_stolen_sheep += sheep[i];
    }

    printf("%d %d\n", attacked, non_stolen_sheep);

    return 0;
}

