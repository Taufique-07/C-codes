#include <stdio.h>
#include <string.h>
#include <math.h>

int check(int n)
{
    if (n <= 1)
        {
        return 0;
        }
    else if (n == 2)
        {
        return 1;
        }
    else if (n % 2 == 0)
        {
        return 0;
        }
    else
        {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

void prime_n()
{
    int num;

    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);

    if (check(num))
        {
        printf("%d is a prime number.\n", num);
        }
    else
         {
        printf("%d is not a prime number.\n", num);

         }
}

double sqr(int a)
{
    return sqrt(a);
}

int square(int a)
{
    return a * a;
}

void math()
{
    int num1, num2;

    printf("Enter two numbers to find their square root and square: \n");
    scanf("%d %d", &num1, &num2);

    double sqrt1 = sqr(num1);
    double sqrt2 = sqr(num2);
    int square1 = square(num1);
    int square2 = square(num2);

    printf("Root of 1st Number %lf\n", sqrt1);
    printf("Root of is %lf\n", sqrt2);
    printf("Square of  is %d\n", square1);
    printf("Square of is %d\n", square2);
}

void string()
{
    char str[100];

    printf("Enter a string: ");
    getchar();
     gets(str);

    int length = strlen(str);
    printf("String length: %d\n", length);

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--)
        {
        printf("%c", str[i]);
        }
    printf("\n");
}

int main()
{
    prime_n();
    math();
    string();

    return 0;
}
