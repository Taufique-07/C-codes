#include<stdio.h>

int main()
{
    int w,d1,d2,d3,m;
    scanf("%d %d %d %d %d",&w,&d1,&d2,&d3,&m);

    int p1=d1*w;
    int p3=d2*w;
    int p2=d3*w;


    if(m==p1)
    {
        printf("Will marry 1st daughter. \n");
    }
    else if (m==p2)
    {
         printf("Will marry 2nd daughter. \n");
    }
    else if (m==p3)
    {
         printf("Will marry 3rd daughter. \n");
    }
    else
    {
         printf("Kill Him! \n");
    }
    return 0;
}
