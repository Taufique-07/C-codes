#include<stdio.h>

int main()

{
    char ch,ch1;
    scanf("%c %c",&ch,&ch1);

    int age;
    scanf("%d",&age);


    if(ch=='F')
    {
        printf("You will work in urban area.\n");
    }

    else if (ch=='M')
    {

            if(age>=20 && age<40)
            {
                printf("You can work anywhere!\n");
            }
            else if(age>=40 && age<60)
            {
                printf("You can work urban area . \n");
            }
            else
            {
                printf("Error\n");
            }
    }

    return 0;
}
