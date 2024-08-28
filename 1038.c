#include<stdio.h>

int main()
{
    int code,quantity;
    scanf("%d %d", &code, &quantity);
    double cost=0;

    switch(code)
    {
      case 1:
          cost=quantity* 4.00;
          break;
      case 2:
          cost=quantity * 4.50;
          break;
      case 3:
          cost=quantity * 5.00;
          break;
      case 4:
          cost=quantity * 2.00;
          break;
      case 5:
          cost=quantity * 1.50;
          break;
      default :
        printf("Invalid input!\n");

    }
    printf("Total: R$ %.2f\n",cost);
    return 0;
}
