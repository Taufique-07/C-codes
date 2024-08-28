#include<stdio.h>

void fun(int num)
{
    if(num == 0)
        return 0;
    printf("Fun \n");
    fun(num--);
}
 int main(void)
{
    fun(11);
    return 0;

}
