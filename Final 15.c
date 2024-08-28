#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);


    float slp[n][3];

    for(int i=0; i<n ; i++)
    {
        double sum=0;


        for(int j=0; j<3; j++)
        {
            scanf("%f",slp[j]);
            sum+=slp[i][j];
            double avg=sum/3.0;
        }
        printf("%f",avg);
    }


    return 0;
}
