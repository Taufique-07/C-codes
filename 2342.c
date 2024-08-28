#include<stdio.h>

int main()
{
    int N,p,q,r;
    char ch;
    scanf("%d %d %c %d", &N, &p, &ch, &q);

    switch(ch)
    {
       case '+':
           r = p+q;
           if(r>N)
           {
               printf("OVERFLOW\n");
           }
           else
           {
               printf("OK\n");
           }
           break;
       case '*':
           r = p * q;
           if(r>N)
           {
               printf("OVERFLOW\n");
           }
           else
           {
               printf("OK\n");
           }
           break ;
    }
    return 0;
}
