#include <stdio.h>

int main()
{
    int cards[5];

    for (int i = 0; i < 5; i++)
        {
        scanf("%d", &cards[i]);
        }

    char result = 'N';

    for (int i = 0; i < 4; i++)
        {
        result = (cards[i] < cards[i + 1]) ? 'C' : (cards[i] > cards[i + 1]) ? 'D' : 'N';
        if (result != 'N')
         {
            break;
         }
        }

    printf("%c\n", result);

    return 0;
}
