#include<stdio.h>

struct student
{
    int ID;
    float age;
}one,two;

int  main(void)
{
    one.ID=125;
    two.age=25;

    printf("One's ID is %d and Age is %f", one.ID,two.age);

    return 0;
}
