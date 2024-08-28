#include<stdio.h>
int main(void)
{
    float a=10.54 ,b;

    do {
         b = a++;

        printf("Float b = %f && a= %f \n", b,a);
    }
    while (b<100);

    return 100;
}
