#include<stdio.h>

int main()

{
    int a=11,c,d;

    c=a+5 + ++a + a++;
    d=a+5 + --a + --a;
    printf("%d \n",c);
    printf("%d \n",d);


    return 0;
}
