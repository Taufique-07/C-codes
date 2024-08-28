#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float x1,x2,d;
    printf("Enter value of A :\n");
    scanf("%d",&a);
    printf("Enter value of B :\n");
    scanf("%d",&b);
    printf("Enter value of C :\n");
    scanf("%d",&c);

    d=sqrt((b*b)-4*(a*c));
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    printf("X1 =%.2f\n",x1);
    printf("X2 =%.2f\n",x2);

    return 0;

}
