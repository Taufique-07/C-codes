// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char x='Z';
   for(int a = x ; a>'A'; a--)
   {
       printf("%c %d \n",a,a);
       if(a<'U' || a % 2 ==1)
       {
           break;
       }
   }

    return 0;
}
