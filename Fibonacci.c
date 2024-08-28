#include <stdio.h>
int main()
{
    int f[100];
    f[0] = 0;
    f[1] = 1;
    int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        f[i] = f[i - 2] + f[i - 1];
    }
    printf("\n");
    for (i=0; i<num; i++)
    {
        printf("%d ",f[i]);
    }
    return 0;
}





















//#include<stdio.h>
//int main(){
  //  int N,i,n[100];
    //scanf("%d", &N);

    //n[0] = 0;
    //n[1] = 1;

    //for(i = 2; i < N; i++){
      //  n[i] = n[i-1] + n[i-2];
    //}
    //printf("0");
    //for(i = 1; i < N; i++){
      //  printf(" %d", n[i]);
    //}
    //printf("\n");
    //return 0;
//}
