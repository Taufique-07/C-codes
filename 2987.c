#include<stdio.h>
int main(){

   char ch;
   int p;
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z')
   {
       p=ch-'A'+1;
   }
   printf("%d \n",p);

    return 0;
}
