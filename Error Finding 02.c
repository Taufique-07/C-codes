#include <stdio.h>

 int main()
{
  int a=10.54;
  float b;
  do {
      float b =a++;
      printf("Float b =\"%f\" && a=\"%06d\"\n",b,a);
  }
  while (b<100);

    return 100;
}

