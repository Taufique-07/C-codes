#include <stdio.h>
int main()
{
    double num1 = 234.345, num2 = 45.698;
    printf("%.6lf - %.6lf\n", num1, num2 );
    printf("%.0lf - %.0lf\n", num1, num2 );
    printf("%.1lf - %.1lf\n", num1, num2 );
    printf("%.2lf - %.2lf\n", num1, num2 );
    printf("%.3lf - %.3lf\n", num1, num2 );
    printf("%e - %e\n", num1, num2 );
    printf("%E - %E\n", num1, num2 );
    printf("%.3lf - %.3lf\n", num1, num2 );
    printf("%.3lf - %.3lf\n", num1, num2 );

    return 0;
}
