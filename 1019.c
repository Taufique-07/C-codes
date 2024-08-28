
#include <stdio.h>

int main()
{
 int sec;

 scanf("%d", &sec);

 int hr = sec/ 3600;
 sec= sec - (hr * 3600);

 int min = sec/ 60;
 sec = sec - (min * 60);

 printf("%d:%d:%d\n", hr, min, sec);

 return 0;
}
