#include <stdio.h>
#include<math.h>

int power(int);

int power(int x)
{

    int result = pow (x,2);
     printf("%d \n",result);
     return result;

}

int main()
{

     int a;
     printf("Enter a value :\n");
     scanf("%d",&a);

     power(a);

    return 0;
}


#include <stdio.h>
#include <math.h>

int power(int);

int power(int x) {
    printf("Enter a value:\n");
    scanf("%d", &x);
    int result = pow(x,2);
    printf("%d\n", result);
    return result;
}

int main()
{
    int a;

    power(a);
    return 0;
}

