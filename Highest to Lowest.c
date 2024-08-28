#include<stdio.h>

int main()
 {
    int num[4];


    for (int i = 0; i < 4; i++)
        {

        scanf("%d", &num[i]);
        }

    int highest[4];

    for (int i = 0; i < 4; i++)
        {
        highest[i] = num[i];
        }

    for (int i = 0; i < 4; i++)
     {
        for (int j = i + 1; j < 4; j++)
            {
            if (highest[i] < highest[j])
               {

                double temp = highest[i];
                highest[i] = highest[j];
                highest[j] = temp;
               }
            }
     }

    printf("Highest: %d\n", highest[0]);
    printf("Second Highest: %d\n", highest[1]);
    printf("Third Highest: %d\n", highest[2]);
    printf("Lowest: %d\n", highest[3]);

    return 0;
}

