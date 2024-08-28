#include <stdio.h>

void sum(float,float);

void sum(float x,float y)
{

    float result = x+y;
     printf("%f \n",result);

}

int main() {

     float a,b;
     printf("Enter 2 values :\n");
     scanf("%f %f",&a,&b);

     sum(a,b);

    return 0;
}
