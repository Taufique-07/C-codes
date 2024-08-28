#include <stdio.h>

int main()
{
    int weights[4];
    char *foods[] = {"Soup", "Noodles", "Pasta", "Pizza"};

    printf("Enter the weights of the 4 siblings (oldest to youngest): ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &weights[i]);
    }

    for (int i = 0; i < 4; i++)
        {
        int max = 0;
        for (int j = 1; j < 4; j++) {
            if (weights[j] > weights[max]) {
                max = j;
            }
        }
        printf("%s will get %s\n", i == 0 ? "Oldest" : i == 1 ? "2nd oldest" : i == 2 ? "3rd oldest" : "Youngest", foods[max]);
        weights[max] = -1;
    }

    return 0;
}
