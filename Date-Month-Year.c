#include<stdio.h>

int main()
{
    int day,month,year;

    printf("Enter a date in DD/MM/YYYY :\n");
    scanf("%d%d%d",&day,&month,&year);

    printf("MM/DD/YYYY :%d/%d/%d \n",month,day,year);
    printf("YYYY/MM/DD :%d/%d/%d \n",year,month,day);
    printf("DD/MM/YYYY :%d/%d/%d \n",day,month,year);
    printf("DD-MM-YYYY :%d-%d-%d \n",day,month,year);

   return 0;
}
