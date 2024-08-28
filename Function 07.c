#include <stdio.h>
#include <math.h>

void power(double,double);

void power(double x, double y)
{

    double result = pow(x,y);
    printf("%lf\n", result);

}

int main() {
    double a,b;
     printf("Enter Base:\n");
     scanf("%lf", &a);

    printf("Enter Exponent :\n");
    scanf("%lf", &b);

    power(a,b);
    return 0;
}

