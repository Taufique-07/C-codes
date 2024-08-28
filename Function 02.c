// Online C compiler to run C program online
#include <stdio.h>


void sum()
{
    int a,b;
    printf("Enter 2 NUmbers : \n");
    scanf("%d %d",&a,&b);

    int result =a+b;
     printf("%d \n",result);

}
void sub()
{
    int a,b,result;
    printf("Enter 2 NUmbers : \n");
    scanf("%d %d",&a,&b);
    result=a-b;
    printf("%d \n",result);
}

void mult()
{
    int a,b,result;
    printf("Enter 2 NUmbers : \n");
    scanf("%d %d",&a,&b);
    result=a*b;
    printf("%d  \n",result);
}

void div()
{
    float a,b,result;
    printf("Enter 2 NUmbers : \n");
    scanf("%f %f",&a,&b);
    result=a/b;
    printf("%f \n",result);
}

int main() {

     sum();
     printf("Result\n");
     sub();
     printf("Result\n");
     mult();
     printf("Result\n");
     div();
     printf("Result\n");

    return 0;
}

