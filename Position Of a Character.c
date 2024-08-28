#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character :\n");
    scanf(" %c",&ch);

    if(ch>='A' && ch<='Z')
    {
        int position = ch-'A'+1;
         printf("Position number : %d \n",position);
    }
    else if (ch>='0' && ch<='9')
    {
        int position = ch-'0'+1;
         printf("Position number : %d \n",position);
    }
    else if(ch>='a' && ch<='z')
        {
            int position =ch-'a'+1;
             printf("Position number : %d \n",position);
        }
    else
    {
        printf("Invalid Input!\n");
    }
    return 0;
}
