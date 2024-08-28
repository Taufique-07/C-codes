#include <stdio.h>
#include <math.h>

double area(double,double);

double area(double x, double y)
{

    double result = 0.5 *x*y;
    printf("%lf\n", result);
    return result;
}

int main() {
    double a,b;
     printf("Enter 2 value:\n");
    scanf("%lf %lf", &a,&b);

    area(a,b);
    return 0;
}

