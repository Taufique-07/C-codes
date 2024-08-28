#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int A[num1][num2];
    int B[num1][num2];

    for (int i = 0; i < num1; i++)
     {
        for (int j = 0; j < num2; j++)
            {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
            {
            scanf("%d", &B[i][j]);
        }
    }
   int a = 1;

           for (int i = 0; i < num1; i++)
            {
             for (int j = 0; j < num2; j++)
             {
              if (A[i][j] != B[i][j])
               {
                 a = 0;
                  break;
                }
           }
          if (!a)
            {
                break;
            }
}

         if (a)
             {
             printf("A & B are equal.\n");
             }
         else
            {
              printf("A & B are not equal.\n");
            }
    return 0;
}
