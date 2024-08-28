#include <stdio.h>

int sub(int,int);

int sub(int x,int y)
{

    float result = x-y;
     printf("%d \n",result);
     return result;

}

int main() {

     int a,b;
     printf("Enter 2 values :\n");
     scanf("%d %d",&a,&b);

     sub(a,b);

    return 0;
}

